#include <stdio.h>
int main(int argc, char const *argv[])
{
    int list[]={12,3,2,343,3434,354,33,4,55,3234,543,543,654,643,556,345,653,566};
    int found=0,i,len,value;
len= sizeof(list)/sizeof(list[0]);
puts("What do you want to search ?");
scanf("%d",&value);
puts("Searching....\t\n");
for ( i = 0; i < len; i++)
{
    printf("%d\n",list[i]);
}

for ( i=0; i<len; i++)
{
    if (list[i]==value)
    {
        found=1;
        break;
    }
}
if (found==1)
{
    printf("%d is on the list in the index of %d\n", value,i);
}else{
    printf("%d is not on the list\n",value);
}

    return 0;
}
