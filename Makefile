CC=gcc
CFLAGS= -std=c99 -I./ -L./ -fPIC#-g -DDEBUG
LDFLAGS=#-lm -g 
AR = ar

all: umber.a

SRC = umber.h umber.c stash.h stash.c lst.c lst.h mem.c mem.h  
OBJ = $(SRC:%.c=%.o)

umber.a: $(OBJ)
	ar -rcs libumber.a  $(OBJ)


clean:
	rm *.o
	rm libumber.a
