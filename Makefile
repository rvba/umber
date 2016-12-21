CC=gcc
CFLAGS=-I./ -L./ #-g -DDEBUG
LDFLAGS=#-lm -g 
AR = ar


SRC = umber.h stash.h stash.c lst.c lst.h mem.c mem.h base.c base.h 
OBJ = $(SRC:%.c=%.o)

umber.a: $(OBJ)


clean:
	rm *.o
	rm umber.a
