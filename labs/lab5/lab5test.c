// CS 463 - lab assignment #5
// lab5test.c
// Purpose: 1D, 2D arrays and functions practice
// Input: null
// Processing: process arrays
// Output: duplicates number, highestTwo, and columnSums of arrays
// author: Huiying Chen
// date written: 2 OCT 2019
// last modified: 3 OCT 2019



#include <stdio.h>
#include "lab5functions.h"


int main(void) {
    
    //test duplicates
    printf("test duplicates: \n");
    int arrDupTest[] = {7, 4, 5, 9, 7, 12, 4, 8, 4, 5};
    int arrDupTest2[] = {7, 22, 4, 5, 9, 7, 12, 4, 22, 8, 4, 5, 22};
    int arrDupTestSize = 10; 
    int answer = duplicates(arrDupTest, arrDupTestSize);
    int arrDupTestSize2 = 13; 
    int answer2 = duplicates(arrDupTest2, arrDupTestSize2);
    printf("1)The number of duplicates in the array is: %d\n", answer);
    printf("2)The number of duplicates in the array is: %d\n", answer2);
    printf("\n");
    
    //test highestTwo
    printf("test highestTwo: \n");
    //special case
    printf("test highestTwo(Invalid): \n");
    float arrOne[] = {1.23};
    highestTwo(arrOne, 1);
    //normal case
    printf("test highestTwo1(same two highest): \n");
    float arrHighestTwoTest[] = {7.5, 15.1, 99, 32.33, 0, -3.5, 99};
    highestTwo(arrHighestTwoTest, 7);
    printf("test highestTwo2(different two highest): \n");
    float arrHighestTwoTest2[] = {75.2341, 15.1, 9, 32.33, 0, -3.5, 9, 7};
    highestTwo(arrHighestTwoTest2, 8);
    printf("\n");
    
    //test columnSums
    printf("test columnSums: \n");
    double arr[3][4] = {{0.0,1.0,2.0,3.0}, {4.0,5.0,6.0,7.0}, {8.0,9.0,10.0,11.0}};
    double sum[4];
    columnSums(3, 4, arr, sum);
    printf("The sum of the elements in each column is : \n");
    int col = 0;
    for (col=0;col<4;col++) {
        printf("%-10d", col);
    }
    printf("\n");
    for (col=0;col<4;col++) {
        printf("%-10f", sum[col]);
    }
    printf("\n");
    
}//end main












