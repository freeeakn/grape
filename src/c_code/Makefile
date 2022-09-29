vCC=gcc -Wall -Werror -Wextra
FLAGS=-Wall -Werror -Wextra

all: compiler.o fundament.o
	$(CC) -o build $(FLAGS) compiler.o fundament.o

compiler.o:
	$(CC) -c $(FLAGS) compiler.c

fundament.o:
	$(CC) -c $(FLAGS) fundament.c

clean:
	rm build
	rm *.o