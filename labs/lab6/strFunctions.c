// CS 463 - lab assignment #6
// strFunctions.c
// Purpose: string practice
// author: Huiying Chen
// date written: 10 OCT 2019


# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include "strFunctions.h"


//copy the lowercase letters from original to lower, and the uppercase letters from original to upper
void splitAlpha ( const char * original, char * lower, char * upper ) {
    int i=0,x=0,y=0;
    //check whether reached the '\0'
    while ( original[i] != '\0' ) {
        //if character is lowercase, put it into lower[]
        if (islower(original[i])) {
            lower[x] = original[i];
            x++;
        }
        //if character is uppercase, put it into upper[]
        if (isupper(original[i])) {
            upper[y] = original[i];
            y++;
        }
        i++;
    }//end while
    //put the null character at the end
    lower[x] = '\0';
    upper[y] = '\0';
}//end splitAlpha



//print any sequences of letters or digits that occur in the string
void printSequences ( const char * text ) {
    int i = 0;
    int j = 0;
    //haven't reached the '\0'
    while (text[i] != '\0') {
        //check if the character is alphanumeric
        while (isalnum(text[i])){
            //check the following character is sequencial or not
            j = i + 1;
            while (isalnum(text[j]) && text[j] == text[i]+j-i) {
                j++;
            }
            //print sequences
            if (j-i>1){
                for (int l=i;l<j;l++){
                    printf("%c",text[l]);
                }
                printf("\n");
             }
             i = j;  //set i to next start index
        }i++;
        
    }
}













