// CS 463 - lab assignment #5
// lab5functions.c
// Purpose: 1D, 2D arrays and functions practice
// Input: null
// Processing: process arrays
// Output: duplicates number, highestTwo, and columnSums of arrays
// author: Huiying Chen
// date written: 2 OCT 2019
// last modified: 3 OCT 2019


#include <stdio.h>
#include <float.h> /* For FLT_MIN */
#include "lab5functions.h"

//Count and return the number of duplicates in the array
int duplicates(int arr[], int size) {
   
   int i,j = 0;
   int freq[size]; //count of each element's occurrence
   int countDup = 0;
   
   //initialize all element in freq[] equal to -1
   for (i=0;i<size;i++) {
        freq[i] = -1;
   }
   //loop to check each element's occurrence
   for(i=0;i<size;i++) {
       int count = 1;
       for (j=i+1;j<size;j++) {
           //if duplicate element is found
           if (arr[i] == arr[j]) {
                count++;
                //make sure not to count frequency of same element again
                freq[j] = 0;
           }//end if
       }//end for j
       //if frequency of current element is not counted
       if (freq[i] != 0) {
           //assign the frequency to the occurrence array
            freq[i] = count;
       }//end if
   }//end for i
   //check how many elements occurrence is greater than 2
   for (i=0;i<size;i++) {
        if (freq[i] >= 2) {
            countDup++;
        }//end if
   }//end for
   return countDup;
}//end duplicates

//Determine the two highest numbers in the array
void highestTwo(float arr[], int size) {
    int i = 0;
    //initialize as minimal float number
    float first,second = FLT_MIN; 
    //make sure the array has at least two elements
    if (size < 2) {
        printf("Invalid array size, at least two. \n");
        return;
    }//end if
    //traverse to check two highest number
    for (i=0;i<size;i++) {
        //if the element is greater than current highest, replace in order
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }//end if
        //if the element is greater than current second highest, replace the second highest
        else if (arr[i] > second) {
            second = arr[i];
        }//end if
    }//end for
    //print meaningful text along with the highest two numbers
    printf("The highest number in the array is: %f\n", first);
    printf("The second highest number in the array is: %f\n", second);
}//end highestTwo


//Calculate the sum of the elements in each column of the two-dimensional array and store the sum in the corresponding element of the one-dimensional array
void columnSums(int numRows, int numCols, double arr[][numCols], double sum[]) {
    int i, j = 0;
    double sumCols = 0.0;
    //loop column to count sum of each column
    for (i=0;i<numCols;i++) {
        //count go through rows
        for (j=0;j<numRows;j++) {
            //count the sum of the elements in each column
            sumCols = sumCols + arr[j][i];
            printf("%f  ", arr[j][i]);
        }//end for j
        //store the sum in the corresponding element of the one-dimensional array
        printf("Sum of the %d column is = %f\n", i, sumCols);
        sum[i] = sumCols;
        //reset sumCols to next loop irritation
        sumCols = 0;
    }//end for i

}//end columnSums
















