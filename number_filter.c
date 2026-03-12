//Edit your code here
#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3!=0)
        {
           printf("%d\n", i);
           if(i%2==0)
           {
              printf("Thank you\n");
           }
        }   
    }
    return 0;
}
