//# CProgramming
//New repo
//Program to find a factorial of any number
#include <stdio.h>
int main() {
double n, factorial=1;
printf("Enter any number :\n");
scanf("%lf", &n);
for (int i=1; i<=n; i++)
{
factorial= factorial*i;
}
printf("Factorial is :%lf\n", factorial);
return 0;
}
