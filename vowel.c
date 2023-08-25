// write a progrmme in C to check if given number is a vowel or not.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //getting started
    char c;
    int upper_case, lower_case;
    printf("Enter an alphabet :\n");
    scanf("%c",&c);

// will evaluate 1 if the condition is true
    lower_case= (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');

// will evaluate 1 if the condition is true 
    upper_case= (c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');

//check in baby

    if (lower_case||upper_case)
    {
        printf("Vowel\n");
    }else{
        printf("Consonant\n");
    }
    
    return 0;
}
