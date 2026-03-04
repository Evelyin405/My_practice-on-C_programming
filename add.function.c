#include<stdio.h>
int addnumbers(int a, int b)
{
	return a + b;
}
int main()
{
	int num1 = 5,num2 = 10;
	int sum = addnumbers(num1,num2);
	printf("Sum: %d\n",sum);
	return 0;
}  