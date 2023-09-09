/*Making a simple calcuator using switch statement
in c*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char oprnd;

    int op1,op2;
//get the operator first
    printf("Enter any operator:\n");

    scanf("%c",&oprnd);

//now gettig any two number to perform arithmatic operation
    printf("Enter 2 numbers :  ");

    scanf("%d", &op1);

    scanf("%d", &op2);

//using switch case for each operator
    switch(oprnd)
    {
    case '+': printf("%d + %d = %d\n", op1,op2, op1+op2);
        break;

    case '-': printf("%d - %d = %d\n", op1,op2, op1-op2);
        break;

    case '*': printf("%d * %d = %d\n", op1,op2, op1*op2);
        break;

    case '/': printf("%d / %d = %d\n", op1,op2, op1/op2);
        break;

    case '%': printf("%d mod %d = %d\n", op1,op2, op1%op2);
        break;

    default: printf("Process failed\n");
        break;
    }

    return 0;
}

//thank you very mych