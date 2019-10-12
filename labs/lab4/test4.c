// CS 463 - lab assignment #4
// test4.c
// Purpose: array, search, sorting algorithm exercise 
// Input: null
// Processing: generate random array
// Output: sorted array, searching results
// author: Huiying Chen
// date written: 24 SEP 2019
// last modified: 25 SEP 2019

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "lab4.h"


int main(void) {
    
    //a)Declare an array of 100 integers
    int array[100];
    //b)Seed the random number generator with the time function
    srand(time(NULL));
    int i, n;
    //c)generate 100 integers between 1 and 1000 and fill the array
    for (i=0;i<100;i++) {
        n = rand() % 1000 + 1;
        array[i] = n;
    }//end for
    //d)Print the array using the printIntArray function
    printf("\nrandom array: \n");
    printIntArray(array, 100);
    printf("\n");
    //e)Use linearSearch to search for 30, 86, and 87
    printf("linearSearch for 30(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",linearSearch(array, 100, 30));
    printf("linearSearch for 86(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",linearSearch(array, 100, 86));
    printf("linearSearch for 87(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",linearSearch(array, 100, 87));
    //f)Use bubble sort to sort the array
    bubbleSort(array, 100);
    //g)Print the array using the printIntArray function
    printf("\nsorted array: \n");
    printIntArray(array, 100);
    printf("\n");
    //h)Use binarySearch to search for 11, 28, 74, and 99
    printf("binarySearch for 11(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",binarySearch(array, 100, 11));
    printf("binarySearch for 28(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",binarySearch(array, 100, 28));
    printf("binarySearch for 74(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",binarySearch(array, 100, 74));
    printf("binarySearch for 99(If key is found in the array, returns the index. If it is not found, returns -1):\n %4d\n",binarySearch(array, 100, 99));
    
}//end main
