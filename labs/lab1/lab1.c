//CS271 - Lab1
//Program name: lab1.c
//Huiying Chen
//28 Aug 2019

#include <stdio.h>
#include <math.h>

//the purpose of this program is to calculate and output the    //circumference and the area

int main (void){

    double radius, circumference, area;
    
    //input the radius of a circle
 
    printf("\nEnter the radius of a circle: \n");
    scanf("%lf", &radius);

    //calculate the circumference
    circumference = 2*M_PI*radius;
    //calculate the area
    area = M_PI*radius*radius;
    
    //display the circumference and the area with 2 decimal places
    printf("The circumference is %.2f\n", circumference);
    printf("The area is %.2f\n", area);
}  //End
