all: lab3

lab3: lab3functions.o lab3.o
	gcc lab3functions.o lab3.o -o lab3 -lm

lab3functions.o: lab3functions.c lab3functions.h
	gcc -c -lm lab3functions.c 

lab3.o: lab3.c lab3functions.h 
	gcc -c -lm lab3.c 

clean:
	rm -rf *.o
