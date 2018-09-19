// Coded by ScratchyCode
// Compile with -lgmp
#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main(){
    unsigned long long int i, lim;
    mpz_t first, second, sum;
    
    mpz_init(first);
    mpz_init(second);
    mpz_init(sum);
    mpz_set_ui(first,1);
    mpz_set_ui(second,1);
    
    printf("Enter the terms number of the Fibonacci sequence: ");
    scanf("%llu",&lim);
    if(lim < 3 || lim > 500000000000000000){
        printf("\nIrregular input.\n");
        return 1;
    }
    
    mpz_out_str (stdout,10,first);
    printf("\n");
    mpz_out_str (stdout,10,second);
    printf("\n");
    
    for(i=1; i<=lim; i++){
        mpz_add(sum,first,second);
        mpz_set(first,second);
        mpz_set(second,sum);
        mpz_out_str (stdout,10,sum);
        printf("\t");
    }
    
    mpz_clear(first);
    mpz_clear(second);
    mpz_clear(sum);
    
    printf("\n");
    return 0;
}
