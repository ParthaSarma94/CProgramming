#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number that need to be created a table:\n");
    scanf("%d",&n);
    for (int  i = 1; i <= 10; i++)
    {
        printf("%d\n", n*i); //the number n will be multiplied by the i value till the loop runs
    }
   
    
    return 0;
}