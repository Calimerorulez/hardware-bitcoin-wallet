// ***********************************************************************
// baseconv.h
// ***********************************************************************
//
// This describes functions and constants exported by baseconv.h
//
// This file is licensed as described by the file LICENCE.

#ifndef BASECONV_H_INCLUDED
#define BASECONV_H_INCLUDED

#include "common.h"

// Address version to use when converting 160-bit hashes to BitCoin
// addresses. This should be 0x00 for the main network or 0x6f for testnet.
#define ADDRESSVERSION		0x00

extern void amount_to_text(char *out, u8 *in);
extern void hash_to_addr(char *out, u8 *in);

#endif // #ifndef BASECONV_H_INCLUDED
