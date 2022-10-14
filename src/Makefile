CC=gcc
СFLAGS=-Wall -Werror -Wextra 
# -I/opt/homebrew/opt/flex/include
# LDFLAGS=-L/opt/homebrew/opt/flex/lib

all: main.o general.o node_list.o
	$(CC) -o gr $(СFLAGS) main.o general.o node_list.o
	rm *.o

main.o:
	$(CC) -c $(СFLAGS) main.c

general.o:
	$(CC) -c $(СFLAGS) ../lib/general.c

node_list.o:
	$(CC) -c $(СFLAGS) ../lib/node_list.c

# lexer.o:
# 	$(CC) -c $(СFLAGS) ../lib/lexer.c

clean:
	rm *.o
	rm gr