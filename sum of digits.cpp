//write a c program to calculate sum of digits
#include <stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
	rem=num%10;
	sum=sum+rem;
	num=num/10;	
	}
	printf("sum of digits=%d",sum);
	return 0;
}
