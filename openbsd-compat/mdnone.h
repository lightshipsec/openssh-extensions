/*	$OpenBSD: md5.h,v 1.17 2012/12/05 23:19:57 deraadt Exp $	*/

/*
 * This code implements the MD5 message-digest algorithm.
 * The algorithm is due to Ron Rivest.  This code was
 * written by Colin Plumb in 1993, no copyright is claimed.
 * This code is in the public domain; do with it what you wish.
 *
 * Equivalent code is available from RSA Data Security, Inc.
 * This code has been tested against that, and is equivalent,
 * except that you don't need to include two pages of legalese
 * with every copy.
 */

#ifndef _MDNONE_H_
#define _MDNONE_H_

#define MDNONE_BLOCK_LENGTH		0
#define MDNONE_DIGEST_LENGTH	0

typedef struct {
	u_int8_t buffer[MDNONE_BLOCK_LENGTH];
} MD_None_CTX;

void	 MD_None_Init(MD_None_CTX *);
void	 MD_None_Update(MD_None_CTX *, const u_int8_t *, size_t)
		__attribute__((__bounded__(__string__,2,3)));
void	 MD_None_Final(u_int8_t [MDNONE_BLOCK_LENGTH], MD_None_CTX *);

#endif /* _MDNONE_H_ */
