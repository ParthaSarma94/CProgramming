//Currently adding 18% GST
//you can update it later

#include <stdio.h>

void calPrice(float price);

int main(int argc, char const *argv[])
{
    float price;
    puts("Enter price");
    scanf("%f",&price);
    calPrice(price);
    return 0;
}

void calPrice(float price){

 //includes 18% GST
price += (0.18 * price);   
printf("Final price : %f\n",price);
}
