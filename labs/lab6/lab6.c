// CS 463 - lab assignment #6
// lab6.c
// Purpose: string practice
// author: Huiying Chen
// date written: 10 OCT 2019

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include "strFunctions.h"

int main(void) {
    
    //test splitAlpha
    printf("\ntest splitAlpha: \n");
    char original[] = "The symbol for (Intel) is - INTC.";
    int len = strlen(original);
    char lower[len];
    for (int i=0;i<len;i++){
        lower[i]=0;
    }
    char upper[len];
    for (int i=0;i<len;i++){
        upper[i]=0;
    }
    printf("string: %s\n", original);
    printf("length: %d\n", len);
    splitAlpha (original, lower, upper);
    printf("lowers: \n");
    printf(lower);
    printf("\n");
    printf("uppers: \n");
    printf(upper);
    printf("\n");
    
    
    //test printSequences
    printf("\ntest printSequences: \n");
    char text[] = "abk123@XY889rSabcdh!aui,4567fakjmn!opqmnopq";
    printf("text: %s \n", text);
    printf("Sequences in the string:  \n");
    printSequences ( text );
    printf("\n");

}
