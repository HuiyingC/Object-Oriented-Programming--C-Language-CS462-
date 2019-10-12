// CS 463 - lab assignment #3
// lab3functions.c
// Purpose: this program is to check an integer number whether it is a perfect, prime number or not, and to reverse an integer number 
// Input: An integer number
// Processing: check perfect, prime, and reverse
// Output: Return 1 if the parameter is a perfect number or prime number. Otherwise, it should return 0. Return the reversed number.
// author: Huiying Chen
// date written: 17 SEP 2019


# include <stdio.h>
# include <math.h>
# include "lab3functions.h"

int perfect(int number) {   
    int i, sum = 0;   

    for(i = 1 ; i < number ; i++) {   
        if(number % i == 0)   
        sum = sum + i;   
    }    
    if (sum == number)   
         return 1;   
    else   
    return 0;   
}


int prime(int number) {
    int i = 0;
    int sq = (int) sqrt(number);
    if (number <= 1) {
        return 0;
    }
    for(i = 2; i <= sq; i++) {
        if(number % i == 0) {
            return 0;
        }    
    }
    return 1;
}

int revDigits(int number) {
    int reverse = 0;
    while (number != 0) {
        reverse = reverse * 10;
        reverse = reverse + number % 10;
        number = number / 10;
    } 
    return reverse;
}
    
    
    

    
    
    
    
    
