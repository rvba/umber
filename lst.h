/* 
 * Copyright (c) 2012 Milovann Yanatchkov 
 *
 * This file is part of Minuit, a free software
 * licensed under the GNU General Public License v2
 * see /LICENSE for more information
 *
 */

#ifndef __LST_H
#define __LST_H

//#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

// LINK

typedef struct Link
{
	struct ID id;

	int order;		// Used by rhizome sorting

	struct Link *next;
	struct Link *prev;

	void *data;

}t_link;

// LST

typedef struct Lst
{
	struct ID id;

	t_link *first;
	t_link *last;
	t_link *current;

	int count;

}t_lst;

void 		lst_dupli(t_lst *dst, t_lst *src);
void 		lst_lifo( t_lst *lst);

void 		lst_link_delete(t_lst *lst,t_link *link);
void 		lst_link_remove(t_lst *lst,t_link *link);
t_link *	lst_link_find_by_id( t_lst *lst, int id);
t_link *	lst_link_find_by_name( t_lst *lst, const char *name);
t_link *	lst_link_find_by_ptr( t_lst *lst, void *ptr);
void 		lst_link_delete_by_name(t_lst *lst, const char *name);
void 		lst_link_delete_by_ptr( t_lst *lst, void *ptr);
void 		lst_link_delete_by_id( t_lst *lst, int id);

void *		lst_get_by_range( t_lst *lst, int i);
t_link *	lst_link_get(t_lst *lst, int pos);

void 		lst_show(t_lst *lst);
t_link *	lst_add(t_lst *lst,void *data,const char *name);
void 		lst_add_lst(t_lst *dst, t_lst *src);
t_lst *		lst_copy(t_lst *lst);
void *		lst_new(const char *name);
void 		lst_free(t_lst *lst);
void 		lst_cleanup(t_lst *lst);
void 		lst_push_back(t_lst *lst,t_link *link);
void 		lst_push_front( t_lst *lst, t_link *link);
void *		link_new(const char *name);
void 		link_free(t_link *link);
int 		lst_sort_bubble(struct Lst *lst);
int 		lst_sort_quick(struct Lst *lst);
void 		lst_link_insert(struct Lst *lst, struct Link *link, struct Link *prev);
t_link *	lst_insert( t_lst *lst, t_link *l, void *data, const char *name);

#ifdef __cplusplus
}
#endif

#endif
