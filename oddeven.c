#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("The given number is even.");
    }
    else
    {
        printf("The given number is odd");
    }
    return 0;
}