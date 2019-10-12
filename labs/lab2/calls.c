// CS 271 - lab assignment #2
// calls.c
// Purpose: this program is to track the lengths of calls and create containing summary statistics: total number of calls, mean call length, minimum call length, and maximum call length.
// Input: A text file containing one line for each call. Each data value represents the duration of a call (in seconds). The sentinel value -1 indicates the end of input data.
// Processing: Count the number of calls. Calculate the mean call length. Keep track of the minimum call length and the maximum call length.
// Output: summary statistics: total number of calls, mean call length, minimum call length, and maximum call length with proper format
// author: Huiying Chen
// date written: 9 SEP 2019

#include <stdio.h>

int main(void)
{
    //open the file which is a text file containing one line for each call in read model
    FILE* file = fopen ("data2.txt", "r");
    //declare variables
    int i;   //line index
    int count = 0;     //total number of calls
    int sum = 0;     //total length of calls
    int min_call = 1000;    //minimum call length
    int max_call = 0;    //maximum call length
    float mean_call = 0.0;   //mean call length

    //scan file line by line
    fscanf (file, "%d", &i);    
    //process file while the line has next or is not -1
    while (!feof (file))
    {  
        //prints lines what we read in the file  
        //printf ("%d ", i);
        //printf ("\n ");

        //count sum
        sum += i;
        //total number of calls add 1
        count++;
        //check the minimum call length
        if (min_call > i)
        {
            min_call = i;
        };//end if 
        //check the maximum call length
        if (max_call < i)
        {
            max_call = i;
        };//end if
        //continue scan
        fscanf (file, "%d", &i);      
    }
    //count the mean call length
    mean_call = (float)sum / count;
    //prints summary statistics and do right-justify
    printf ("\n ");
    printf ("Total Number of Calls   %*d ", 15, count);
    printf ("\n ");
    printf ("Mean Call Length     %*.2f seconds", 10, mean_call);    //with 2 decimal digits 
    printf ("\n ");
    printf ("Minimum Call Length  %*d seconds", 10, min_call);
    printf ("\n ");
    printf ("Maximum Call Length  %*d seconds", 10, max_call);
    //close file
    fclose (file);        
    
}//end main
