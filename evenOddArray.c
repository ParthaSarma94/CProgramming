//2d array
#include <stdio.h>

int countEven(int arr[],int n);
int countOdd(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr[100],n,i;
    puts("How many elems youll enter:");
    scanf("%d",&n);

    for( i = 0; i < n; i++)
    {
        printf("Enter %d th index :\n",i);
        scanf("%d", &arr[i]);
    }
    
    
    printf("You have entered total %d numbers..\n ",n);
    printf(" Youve entered total %d even numbers\n", countEven(arr,n));
    printf("And total %d odd numbers\n", countOdd( arr,n));
    return 0;
}

int countEven(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            count++;
        }     
    }
    return count;
}

int countOdd(int arr[], int n){
    int countN=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 != 0)
        {
            countN++;
        }
    }
    return countN;
}

