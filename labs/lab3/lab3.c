// CS 463 - lab assignment #3
// lab3.c
// Purpose: Test program of lab3functions.c 
// Input: An integer number
// Processing: check perfect, prime, and reverse
// Output: Print all perfect numbers less than 1000, print the first 20 positive, prime numbers, print the reverse of several numbers
// author: Huiying Chen
// date written: 17 SEP 2019

# include <stdio.h>  
# include <math.h>
# include "lab3functions.h"

int main(void) {
    int answer = 0;

// use the perfect function to print the positive, perfect numbers less than 1000
    printf("Positive perfect numbers less than 1000 are: \n");
    for(int i = 2; i < 1000; i++) {
        answer = perfect(i);
        if(answer == 1) {
            printf("%d\t", i);
        }
    }
    printf("\n");
  
// use the prime function to print the first 20 positive, prime numbers
    printf("The first 20 positive, prime numbers are: \n");
    int count = 0;
    for (int i = 2; i <1000; i++) {
	    answer = prime(i);
	    if (answer == 1) {
	        printf("%d\t", i);
		    count++;
        }
        if (count == 20) {
            break;        
	    }
    }

// use the revDigits function to print the reverse of several (at least 3)
// numbers with various numbers of digits
    //int num = 0;
    //printf("Please enter a number to reverse: ");
    //scanf("%d", &num);
    int n1 = 31835;
    printf("\n%d after reverse is: %d", n1, revDigits(n1));
    int n2 = 1840;
    printf("\n%d after reverse is: %d", n2, revDigits(n2));
    int n3 = -6498;
    printf("\n%d after reverse is: %d", n3, revDigits(n3));
    int n4 = -2019;
    printf("\n%d after reverse is: %d", n4, revDigits(n4));
    printf("\n");
}    
