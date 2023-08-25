//its a C program to find factorial of any given number.
// it can show error/nothing if you enter a big number.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    double n;
    double fact=1;
    printf("Enter the number\n");
    scanf("%lf",&n);
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    printf("Factorial is :%lf",fact);
    
    return 0;
}
