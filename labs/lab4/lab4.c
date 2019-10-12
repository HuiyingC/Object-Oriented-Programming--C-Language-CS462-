// CS 463 - lab assignment #4
// lab4.c
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


//Linear Search. If key is found in the array, returns the index. If it is not found, returns -1.
int linearSearch( int array[ ], int arraySize, int key ) {
    int i;
    for (i=0;i<arraySize;i++) {
        if (array[i] == key) {
            return i;
        }//end if
    }//end for
    return -1;
}//end linearSearch




//Binary Search. If key is found in the array, returns the index. If it is not found, returns -1.
//assume the array is sorted
int binarySearch ( int array [ ], int arraySize, int key ) {
    int start = 0;
    int end = arraySize - 1;
    int middle = (arraySize - 1) / 2;
    //while loop to check the target key
    while (start <= end) {
        //if middle data is less than the key, move start to middle+1
        if (array[middle] < key) {
            start = middle + 1;
        }//end if
        //if middle data equals to the key, founded and return the index
        else if (array[middle] == key) {
            return middle;
        }//end if
        //if middle data is greater than the key, move end to middle-1
        if (array[middle] > key) {
            end = middle - 1;
        }//end if
        //reset the middle
        middle = (start + end) / 2;
    }//end while
    //not found, return -1
    return -1;
}//end binarySearch    


//Print the elements of the array, each element should be right-justified using a field width of 5. Print 10 elements per line. (The last line may not have 10 elements.)
void printIntArray ( int array [ ], int arraySize ) {
    //the total lines number needed to be printed
    int maxLine = arraySize / 10 + 1; 
    //horizontal and vertical prints 
    int line,column;
    //prints lines except the last line
    for (line=0;line<maxLine-1;line++) {
        //prints 10 elements per line 
        for (column=0;column<10;column++){
            //get element index and print
            int i = line * 10 + column;
            printf("%5d", array[i]);
        }//end inner for
        printf("\n");
    }//end outer for
    //print the last line
    for (column=0;column<arraySize%10;column++) {
        int i = maxLine * 10 + column;
        printf("%5d", array[i]);
    }//end for
}//end printIntArray    


//Sort the array in non-descending order.
void bubbleSort ( int array[ ] , int arraySize ){
    int i;
    int j;
    int temp;
    for (i=1;i<arraySize;i++) {
        bool sorted = true;
        for (j=0;j<arraySize-i;j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                sorted = false;
            }//end if
        }//end for j    
        //terminate the i loop if sorted is still true
        if (sorted == true) {
            return;
        }//end if 
    }//end for i   
}//end bubbleSort    













