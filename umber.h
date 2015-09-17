#ifndef _UMBER_H_
#define _UMBER_H_

#ifdef __cplusplus
extern "C" {
#endif

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

#endif
