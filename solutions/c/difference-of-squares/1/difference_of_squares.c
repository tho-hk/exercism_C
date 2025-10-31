#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    if (number > 0){                                             // check that input is not 0
         return (number * (number + 1) * (2 * number + 1)) / 6 ; // n(n+1)(n+2)/6
    }
    return 0;
}

unsigned int square_of_sum(unsigned int number){
    /*
    sum of N terms
    {first term} + {last term} / 2 x N
    in sum of first N natual numbers: 
    first term = 1, last term = N
    
    1 + n / 2 * n 
    = (n + n^2) / 2 
    = n(1 + n) / 2
    */
    //unsigned int sum = (number * (1 + number)) / 2; // (n(1 + n))/2
    if (number > 0){
        return (number * (1 + number)) / 2 * (number * (1 + number)) / 2;
    }
    return 0;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}