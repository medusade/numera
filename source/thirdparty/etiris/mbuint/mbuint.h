/**
 **********************************************************************
 * Copyright (c) 1988-2018 $organization$
 *
 * This software is provided by the author and contributors ``as is'' 
 * and any express or implied warranties, including, but not limited to, 
 * the implied warranties of merchantability and fitness for a particular 
 * purpose are disclaimed. In no event shall the author or contributors 
 * be liable for any direct, indirect, incidental, special, exemplary, 
 * or consequential damages (including, but not limited to, procurement 
 * of substitute goods or services; loss of use, data, or profits; or 
 * business interruption) however caused and on any theory of liability, 
 * whether in contract, strict liability, or tort (including negligence 
 * or otherwise) arising in any way out of the use of this software, 
 * even if advised of the possibility of such damage.
 *
 *   File: mbuint.h
 *
 * Author: $author$
 *   Date: 3/20/2018
 **********************************************************************
 */
#ifndef _ETIRIS_MBUINT_MBUINT_H
#define _ETIRIS_MBUINT_MBUINT_H

#include <string.h>

#define MBU_MAX 256
#define MBU_EXT (MBU_MAX*2+1)

#ifndef uint8
#define uint8 uint8
typedef unsigned char uint8;
#endif

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

unsigned mbu_get_u(const uint8 *a,unsigned bytes);
void mbu_set_u(uint8 *r,unsigned a,unsigned bytes);

void mbu_clear(uint8 *a,unsigned bytes);
void mbu_get(uint8 *r, const uint8 *a,unsigned bytes);
void mbu_set(uint8 *r, const uint8 *a,unsigned bytes);

void mbu_r(uint8 *r,const uint8 *a,unsigned bytes,unsigned xbytes);
void mbu_x(uint8 *r,const uint8 *a,unsigned bytes,unsigned xbytes);

int mbu_cmp(const uint8 *a,const uint8 *b,unsigned bytes);

void mbu_add_u8(uint8 *r,const uint8 *a,uint8 b,unsigned bytes);
void mbu_add(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);
void mbu_add_x(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);

void mbu_sub_u8(uint8 *r,const uint8 *a,uint8 b,unsigned bytes);
void mbu_sub(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);

void mbu_lshift_1(uint8 *r,const uint8 *a,unsigned bytes);
void mbu_rshift_1(uint8 *r,const uint8 *a,unsigned bytes);

void mbu_lshift_8(uint8 *r,const uint8 *a,unsigned bytes);
void mbu_rshift_8(uint8 *r,const uint8 *a,unsigned bytes);

void mbu_lshift(uint8 *r,const uint8 *a,unsigned bytes,unsigned bits);
void mbu_rshift(uint8 *r,const uint8 *a,unsigned bytes,unsigned bits);

void mbu_mul_u8(uint8 *r,const uint8 *a,uint8 b,unsigned bytes);
void mbu_mul(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);
void mbu_mul_x(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);

void mbu_div_rem(uint8 *q,uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);
void mbu_div(uint8 *q,const uint8 *a,const uint8 *b,unsigned bytes);

void mbu_mod(uint8 *r,const uint8 *a,const uint8 *b,unsigned bytes);
void mbu_mod_inverse(uint8 *r,const uint8 *a,const uint8 *n,unsigned bytes);
void mbu_mod_exp(uint8 *r,const uint8 *a,const uint8 *m,const uint8 *e,unsigned bytes,unsigned expbytes);
void mbu_mod_exp_montgomery(uint8 *r,const uint8 *a,const uint8 *m,const uint8 *e,unsigned bytes,unsigned expbytes);
void mbu_mod_exp_crt(uint8 *r,const uint8 *a,const uint8 *p,const uint8 *q,const uint8 *dmp1,const uint8 *dmq1,const uint8 *iqmp,unsigned bytes);
void mbu_mod_exp_crt_montgomery(uint8 *r,const uint8 *a,const uint8 *p,const uint8 *q,const uint8 *dmp1,const uint8 *dmq1,const uint8 *iqmp,unsigned bytes);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* _ETIRIS_MBUINT_MBUINT_H */

        

