//Edit your code here
#include<stdio.h>
int main()
{
    int a = 5, b = 3, c = 2;
    int result1,result2,result3;
    result1 = a + b * c;
    result2 = a * b / c;
    result3 = (a == b) != (b == c);
    printf("Expression 1 (a + b * c) = %d\n", result1);
    printf("Expression 2 (a * b / c) = %d\n", result2);
    printf("Expression 3 ((a == b) != (b == c)) = %d\n", result3);
    return 0;
}