/*finding largest and smallest number from 3 
    numbers that are given as input.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    //declare variables
    int a,b,c,large,small;
    printf("Enter three numbers here :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

//finding the largest number
    if (a>b)
    {
        if (a>c)
        {
          large=a;
        }else{
            large=c;
        }
        
    }else if (b>c)
    {
     large=b;
    }else{
        large=c;
    }
    
//finding the samllest number
    if(a<b){
        if (a<c)
        {
            small=a;
        }else{
            small=c;
        }
        }else if(b<c){
            small=b;
        }else{
            small=c;
        }

    //print it out
    printf("%d\n",large);
    printf("%d\n",small);


    return 0;
    }
    
   

