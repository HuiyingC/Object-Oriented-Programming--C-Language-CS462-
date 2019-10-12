all: test5

test5: lab5functions.o lab5test.o
	gcc lab5functions.o lab5test.o -o test5

lab5functions.o: lab5functions.c lab5functions.h
	gcc -c lab5functions.c

lab5test.o: lab5test.c lab5functions.h
	gcc -c lab5test.c

clear:
	rm -rf *.o
