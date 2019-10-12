// CS 271 - lab assignment #2
// triples.c
// purpose: this program is to find all of the triples with hypotenuse less than or equal to 1000 by using brute force with triple-nested for loops 
// author: Huiying Chen
// date written: 10 SEP 2019

#include <stdio.h>

int main(void)
{
    //declare variables
    int side1, side2, hypotenuse; 
    //prints header information
    printf("%6s , %6s , %10s\n", "Side 1", "Side 2", "Hypotenuse");
    printf("%6s , %6s , %10s\n", "------", "------", "----------");
    //Use brute force with triple-nested for loops to find all of the triples with hypotenuse less than or equal to 1000
    for(side1=1;side1<=1000;side1++){
        for(side2=side1;side2<=1000;side2++){
            for(hypotenuse=side2;hypotenuse<=1000;hypotenuse++){
                // triplet: (side1)^2 + (side2)^2 = (hypotenuse)^2 
                if(hypotenuse*hypotenuse == side1*side1+side2*side2){
                    //prints all of the Pythagorean Triples and right-justify it
                    printf("%6d , %6d , %10d\n", side1, side2, hypotenuse);
                    printf("\n");
                }//end if
            }//end third for loop
        }//end second for loop
    }//end first for loop

}//end main