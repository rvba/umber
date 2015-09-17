# UMBER

cmake_minimum_required(VERSION 2.8) 

project(Umber)

set(SRC_UMBER

	stash.h
	stash.c
	
	)

GET_PROPERTY(_UMBER_LIB GLOBAL PROPERTY UMBER_LIB)

if( NOT DEFINED _UMBER_LIB)
	SET_PROPERTY(GLOBAL PROPERTY UMBER_LIB "not set")
	set(_UMBER_LIB "not set")
endif() 


if( NOT ${_UMBER_LIB} STREQUAL "set")
	SET_PROPERTY(GLOBAL PROPERTY UMBER_LIB "set")
	add_library(umber STATIC ${SRC_UMBER})
endif()
