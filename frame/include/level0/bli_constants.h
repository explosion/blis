/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2013, The University of Texas

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_CONSTANTS_H
#define BLIS_CONSTANTS_H

// return pointers to constants

// 2

#define bli_s2 \
\
	( BLIS_CONST_S_PTR( BLIS_TWO ) )

#define bli_d2 \
\
	( BLIS_CONST_D_PTR( BLIS_TWO ) )

#define bli_c2 \
\
	( BLIS_CONST_C_PTR( BLIS_TWO ) )

#define bli_z2 \
\
	( BLIS_CONST_Z_PTR( BLIS_TWO ) )

#define bli_i2 \
\
	( BLIS_CONST_I_PTR( BLIS_TWO ) )

// 1

#define bli_s1 \
\
	( BLIS_CONST_S_PTR( BLIS_ONE ) )

#define bli_d1 \
\
	( BLIS_CONST_D_PTR( BLIS_ONE ) )

#define bli_c1 \
\
	( BLIS_CONST_C_PTR( BLIS_ONE ) )

#define bli_z1 \
\
	( BLIS_CONST_Z_PTR( BLIS_ONE ) )

#define bli_i1 \
\
	( BLIS_CONST_I_PTR( BLIS_ONE ) )

// 0

#define bli_s0 \
\
	( BLIS_CONST_S_PTR( BLIS_ZERO ) )

#define bli_d0 \
\
	( BLIS_CONST_D_PTR( BLIS_ZERO ) )

#define bli_c0 \
\
	( BLIS_CONST_C_PTR( BLIS_ZERO ) )

#define bli_z0 \
\
	( BLIS_CONST_Z_PTR( BLIS_ZERO ) )

#define bli_i0 \
\
	( BLIS_CONST_I_PTR( BLIS_ZERO ) )

// -1

#define bli_sm1 \
\
	( BLIS_CONST_S_PTR( BLIS_MINUS_ONE ) )

#define bli_dm1 \
\
	( BLIS_CONST_D_PTR( BLIS_MINUS_ONE ) )

#define bli_cm1 \
\
	( BLIS_CONST_C_PTR( BLIS_MINUS_ONE ) )

#define bli_zm1 \
\
	( BLIS_CONST_Z_PTR( BLIS_MINUS_ONE ) )

#define bli_im1 \
\
	( BLIS_CONST_I_PTR( BLIS_MINUS_ONE ) )

// -2

#define bli_sm2 \
\
	( BLIS_CONST_S_PTR( BLIS_MINUS_TWO ) )

#define bli_dm2 \
\
	( BLIS_CONST_D_PTR( BLIS_MINUS_TWO ) )

#define bli_cm2 \
\
	( BLIS_CONST_C_PTR( BLIS_MINUS_TWO ) )

#define bli_zm2 \
\
	( BLIS_CONST_Z_PTR( BLIS_MINUS_TWO ) )

#define bli_im2 \
\
	( BLIS_CONST_I_PTR( BLIS_MINUS_TWO ) )


// set to constant

// set0s

#define bli_sset0s( a ) \
{ \
	(a) = 0.0F; \
}
#define bli_dset0s( a ) \
{ \
	(a) = 0.0; \
}
#define bli_cset0s( a ) \
{ \
	(a).real = 0.0F; \
	(a).imag = 0.0F; \
}
#define bli_zset0s( a ) \
{ \
	(a).real = 0.0; \
	(a).imag = 0.0; \
}

// setimag0

#define bli_ssetimag0( a ) \
{ \
	; \
}
#define bli_dsetimag0( a ) \
{ \
	; \
}
#define bli_csetimag0( a ) \
{ \
	(a).imag = 0.0F; \
}
#define bli_zsetimag0( a ) \
{ \
	(a).imag = 0.0; \
}

#endif