#ifndef _UMBER_H_
#define _UMBER_H_

#ifdef __cplusplus
extern "C" {
#endif


#define iseq( a, b) ( !( strcmp( (a), (b))))  
#define _NAME_ 64
#define MILLION 1000000
#define _NAME_LONG_ 128
#define _PATH_ 150
#define _EXT_ 10
#define _STATE_ 20
#define _LIST_ 10


typedef struct ID
{
	int id;
	int id_chunk;
	short users;
	char name[_NAME_];
	int store;
	struct Node *node;
}t_id;

void color_id(int *color);
void id_show( t_id *id);
void id_init(t_id *id, const char *name);
void set_name(char *dst,const char *src);
void set_name_long(char *dst,const char *src);
void set_path(char *dst,const char *src);
void rest( float sec);

#ifdef __cplusplus
}
#endif

/* INCLUDES */

#include "lst.h"
#include "mem.h"
#include "stash.h"

#endif
