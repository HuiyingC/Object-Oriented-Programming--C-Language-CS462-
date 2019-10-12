#include <stdio.h>
#include <math.h>

// write a function to print a square pattern of characters
// parameters:  side - length of one side
//              fillCharacter - the character to print
//

void square( int side, char fillCharacter ) {

   int l, c;
   for ( l = 1; l <= side; l++ ) {

      for ( c = 1; c <= side; c++ ) {

         printf("%c", fillCharacter);

      } // end for c
      printf("\n");

   } // end for l

} // end function square

void alphabetSquare( int side, char startCharacter ) {

   int l, c;
   int counter = 0;
   for ( l = 1; l <= side; l++ ) {

      for ( c = 1; c <= side; c++ ) {

         printf("%c", startCharacter + counter);
         counter++;

      } // end for c
      printf("\n");

   } // end for l

} // end function square

// write a function that accepts an integer parameter
// and prints the digits of the integer with two spaces
// between digits

// parameter is 1234, the function outputs 1  2  3  4  
void intWithSpaces ( int i ) {

   
}

// write a function to determine if a number is prime
// 1 "yes"  0 "no" 

int isPrime( int n ) {



}




int main( void ) {
    


   alphabetSquare( 4, 'a' );

} // end main 
