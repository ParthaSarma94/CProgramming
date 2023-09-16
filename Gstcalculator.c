//Currently adding 18% GST
//you can update it later

#include <stdio.h>

void calPrice(float value);

int main(int argc, char const *argv[])
{
    float value;
    puts("Enter price");
    scanf("%f",&value);
    calPrice(value);
    return 0;
}

void calPrice(float value){

 //includes 18% GST
value += (0.18 * value);   
printf("Final price : %f\n",value);
}