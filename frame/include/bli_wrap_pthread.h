#if BLIS_OS_WINDOWS
// By devinamatthews, see https://github.com/flame/blis/issues/247
// This provides threading primitives on Windows, avoiding the need for
// a pthreads dependency.

enum
{
  BLIS_UNINITIALIZED,
  BLIS_INITIALIZING,
  BLIS_INITIALIZED
}

typedef volatile long pthread_mutex_t;

typedef volatile unsigned pthread_once_t;

#define PTHREAD_ONCE_INIT BLIS_UNINITIALIZED

#define PTHREAD_MUTEX_INIT 0


int pthread_mutex_lock(pthread_mutex_t* mutex)
{
    while (InterlockedbittestandsetAcquire(mutex, 0)) continue;
    return 0;
}


int pthread_mutex_trylock(pthread_mutex_t* mutex)
{
    if (!InterlockedbittestandsetAcquire(mutex, 0))
    {
        return 0;
    }
    else
    {
        return EBUSY;
    }
}


int pthread_mutex_unlock(pthread_mutex_t* mutex)
{
    InterlockedbittestandresetRelease(mutex, 0);
    return 0;
}


void pthread_once(pthread_once_t* once, void (*init)(void))
{
  // Return fast if initialized.
  if (*once == BLIS_INITIALIZED) return;

  // Attempt to lock for initialization.
  unsigned result =
    InterlockedCompareExchange(once, BLIS_INITIALIZING, BLIS_UNINITIALIZED);

  // If initialization completed in the meantime return.
  if (result == BLIS_INITIALIZED) return;

  // If another thread is currently initializing, spin until it is done.
  if (result == BLIS_INITIALIZING)
  {
    while (*once != BLIS_INITIALIZED) continue; // or _mm_pause
    return;
  }

  // At this point, we know that the CAS was successful and we
  // are responsible for initialization.
  init();

  // Let the other threads know we're done.
  // This is supposed to produce a full memory barrier.
  InterlockedExchange(*once, BLIS_INITIALIZED);
}

#else
  #include <pthread.h>
#endif
