#include<stdlib.h>
#include<time.h>
#include<stdio.h>


int main(void)
{
        int n;
		/*int char = positive;
		  int char = negative;
		  int char = zero;*/

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n>0){
        printf("%d The number is:positive\n");}
        else if (n<0){
        printf("%d The number is:negative\n");}
        else{
        printf("%d The number is:zero\n");}
return 0;
}
