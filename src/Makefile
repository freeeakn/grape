CC=gcc
СFLAGS=-Wall -Werror -Wextra 
# -I/opt/homebrew/opt/flex/include
# LDFLAGS=-L/opt/homebrew/opt/flex/lib

all: main.o general.o
	$(CC) -o gr $(СFLAGS) main.o general.o
	rm *.o

main.o:
	$(CC) -c $(СFLAGS) main.c

general.o:
	$(CC) -c $(СFLAGS) ../lib/general.c

clean:
	rm grape
	rm *.o