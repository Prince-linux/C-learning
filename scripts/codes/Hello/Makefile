CC = gcc
CFLAGS = --warn-all
LIB = 
APP = getnum

all: $(APP)

$(APP): main.o util.o
	$(CC) main.o util.o -o $(APP)

util.o : util.c  util.h
	$(CC) -c $(CFLAGS) util.c -o util.o

main.o: main.c
	$(CC) -c $(CFLAGS) main.c -o main.o

clean:
	rm -f *.o

distclean: clean
	rm -f $(APP)

