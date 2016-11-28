/*	$OpenBSD: md5.c,v 1.9 2014/01/08 06:14:57 tedu Exp $	*/

/*
 * This code implements the MD5 message-digest algorithm.
 * The algorithm is due to Ron Rivest.	This code was
 * written by Colin Plumb in 1993, no copyright is claimed.
 * This code is in the public domain; do with it what you wish.
 *
 * Equivalent code is available from RSA Data Security, Inc.
 * This code has been tested against that, and is equivalent,
 * except that you don't need to include two pages of legalese
 * with every copy.
 *
 * To compute the message digest of a chunk of bytes, declare an
 * MD5Context structure, pass it to MD5Init, call MD5Update as
 * needed on buffers full of bytes, and then call MD5Final, which
 * will fill a supplied 16-byte array with the digest.
 */

#include "includes.h"

#include <sys/types.h>
#include <string.h>
#include "mdnone.h"


void
MD_None_Init(MD_None_CTX *ctx)
{
	memset( ctx->buffer, 0, MDNONE_BLOCK_LENGTH );
}

void
MD_None_Update(MD_None_CTX *ctx, const unsigned char *input, size_t len)
{
}

void
MD_None_Final(u_int8_t digest[MDNONE_DIGEST_LENGTH], MD_None_CTX *ctx)
{
	memset( digest, 0, sizeof(u_int8_t)*MDNONE_DIGEST_LENGTH );
}

