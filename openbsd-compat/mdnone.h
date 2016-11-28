/*
 * This code implements the 'none' message-digest resulting
 * in no integrity protection.
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
