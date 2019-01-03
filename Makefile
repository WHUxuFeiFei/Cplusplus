APP:=test
CC := g++
CFLAGS := -Wall -O2
SRCS:=$(wildcard *.c)
OBJS:= $(SRCS:%.c=%.o)


all:test

hello:$(OBJS)
	$(CC) -o $(APP) $(OBJS) $(CFLAGS) 

.c.o:
	$(CC) -c $<




clean:
	rm -rf  $(APP) *.o
