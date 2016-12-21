/* 
 * Copyright (c) 2012 Milovann Yanatchkov 
 *
 * This file is part of Minuit, a free software
 * licensed under the GNU General Public License v2
 * see /LICENSE for more information
 *
 */

#ifndef __BASE_H__
#define __BASE_H__


#include <string.h>
#include "umber.h"

#define MILLION 1000000

#define _NAME_LONG_ 128
#define _PATH_ 150
#define _EXT_ 10
#define _STATE_ 20
#define _LIST_ 10


#ifdef __cplusplus
extern "C" {
#endif

#define SQ(x) ((x) *(x))

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

#endif


