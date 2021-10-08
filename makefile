all: main.o strings.o
	gcc -o program main.o strings.o

main.o: main.c strings.h
	gcc -c main.c

strings.o: strings.c strings.h
	gcc -c strings.c

clean:
	rm -rf *.o