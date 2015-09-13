# UMBER

cmake_minimum_required(VERSION 2.8) 

project(Umber)

set(SRC_UMBER

	stash.h
	stash.c
	
	)

add_library(umber STATIC ${SRC_UMBER})
