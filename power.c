// C Program 
#include<stdio.h>
int calcFactorial(int);
int main()
{
	int n, result;
	printf("Enter n value=");
	scanf("%d", &n);
	result = calcFactorial(n);
	printf("Factorial of %d is %d", n, result);
	return 0;
}
int calcFactorial(int x)
{
	int fact=1;
	if(x==0||x==1)
	return 1;
	else
	return x*(x);
}

