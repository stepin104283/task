#include "prime.h"

/**
* This function returns true if the given number is prime number and false if not
*
*/

int prime(int num){
   for(int i=2;i<=num/2;i++){             //checks if the number is divisible by any other number other than 1 and itself
        if(num%i==0)
            return 0;
   }
   return 1;
}
