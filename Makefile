CC=gcc
CFLAGS=-I./ -L./ -fPIC#-g -DDEBUG
LDFLAGS=#-lm -g 
AR = ar

all: umber.a

SRC = umber.h stash.h stash.c lst.c lst.h mem.c mem.h base.c base.h 
OBJ = $(SRC:%.c=%.o)

umber.a: $(OBJ)
	ar -rc libumber.a  $(OBJ)


clean:
	rm *.o
	rm libumber.a
