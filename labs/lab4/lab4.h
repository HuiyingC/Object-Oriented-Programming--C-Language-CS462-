// CS 463 - lab assignment #4
// lab4.h
// Purpose: array, search, sorting algorithm exercise
// Input: null
// Processing: generate random array
// Output: sorted array, searching results
// author: Huiying Chen
// date written: 24 SEP 2019
// last modified: 25 SEP 2019


#ifndef LAB4_H 
#define LAB4_H


int linearSearch( int array[ ], int arraySize, int key );

int binarySearch ( int array [ ], int arraySize, int key );
 
void printIntArray ( int array [ ], int arraySize );

void bubbleSort ( int array[ ] , int arraySize );


#endif 
