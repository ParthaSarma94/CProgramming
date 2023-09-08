#include <stdio.h>
int main(){

    //variables
int term1=0, term2=1, n, i, nextTerm;

//take input for (n) number of terms
printf("Enter number of terms :\n");
scanf("%d",&n);

//a number is sum of its last 2 previous numbers
nextTerm= term1+term2;
//print 0,1 first
printf("Fibonacci sequence is\n %d, %d, ",term1,term2);

//the loop starts from 3 to its (n)th term
for ( i = 3; i<=n; ++i)
{
    printf("%d, ",nextTerm);
    term1=term2;
    term2=nextTerm;
    nextTerm= term1+term2;
}
    return 0;
}