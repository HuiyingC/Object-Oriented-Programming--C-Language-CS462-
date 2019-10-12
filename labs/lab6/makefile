all: lab6

lab6: strFunctions.o lab6.o
	gcc strFunctions.o lab6.o -o lab6

strFunctions.o: strFunctions.c strFunctions.h
	gcc -c strFunctions.c

lab6.o: lab6.c strFunctions.h
	gcc -c lab6.c

clear:
	rm -rf *.o
