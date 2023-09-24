#include <stdio.h>
void circle();
void square();
void rectangle();

int main(int argc, char const *argv[])
{
    int shapes;
    printf("Please write in small letters....");
    printf("\nEnter 'c' for circle, 's' for square and 'r' for rectangle... ");
    shapes= getchar();

    if (shapes=='c')
    {
        circle();
    }else if (shapes=='s')
    {
       square();
    }else if (shapes=='r')
    {
        rectangle();
    }else{
        puts("Invalid input");
    }
    
    return 0;
}

void circle(){
    float radius;
printf("Enter radius in cm:");
scanf("%f",&radius);
printf("Area of the circle is %f\n", 3.14*radius*radius);
}

void square(){
int side;
printf("Enter side in cm:");
scanf("%d",&side);
printf("Area of the square is %d\n", side*side);
}

void rectangle(){
int width,length;
printf("Enter width in cm:");
scanf("%d",&width);
printf("Enter legth in cm:");
scanf("%d",&length);
printf("Area of the circle is %d\n", width*length);
}