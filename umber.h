#ifndef _UMBER_H_
#define _UMBER_H_


#define MILLION 1000000

#define _NAME_LONG_ 128
#define _PATH_ 150
#define _EXT_ 10
#define _STATE_ 20
#define _LIST_ 10


#ifdef __cplusplus
extern "C" {
#endif

#define is( a, b) ( !( strcmp( (a), (b))))  

#define _NAME_ 64

typedef struct ID
{
	int id;
	int id_chunk;
	short users;
	char name[_NAME_];
	int store;
	struct Node *node;
}t_id;

#ifdef __cplusplus
}
#endif

#include "lst.h"
#include "mem.h"
#include "base.h"

#endif
