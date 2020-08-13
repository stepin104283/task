#include<stdio.h>
#include <string.h>
/**
* This the main function that converts the string to substring with respect to delimiter
*
*/

int main() {
   char string[50] ;
   printf("Enter the input string\n");
   gets(string);
   // Extract the first substring
   char * substring = strtok(string, "_");
   // loop through the string to extract all other substrings
   while( substring != NULL ) {
      printf( " %s\n", substring ); //printing each substring
      substring = strtok(NULL, "_");
   }
   return 0;
}
