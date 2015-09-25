all: setitimer-helper squish-pty squish-unix

CC = gcc
CFLAGS = -Wall -W
LDFLAGS = -lm

setitimer-helper: 
	$(CC) $(CFLAGS) setitimer-helper.c -o setitimer-helper.o $(LDFLAGS)
squish-pty: 
	$(CC) $(CFLAGS) squish-pty.c -o squish-pty.o $(LDFLAGS)
squish-unix: 
	$(CC) $(CFLAGS) squish-unix.c -o squish-unix.o $(LDFLAGS)

clean: 
	rm -f *.o setitimer-helper squish-pty squish-unix
