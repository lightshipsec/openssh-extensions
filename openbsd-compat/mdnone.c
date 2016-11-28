/*
 * This code implements the 'none' message-digest which
 * results in no integrity protection.
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

