// 0,1,1,2,3,5,8.......upto n terms.W.C.P to display the given sequence.
#include <stdio.h>
int main()
{
	int n;
	int a=-1,b=1;
	int sum =0;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		sum=a+b;
		printf("%d\t",sum);
		a=b;
		b=sum;
		i++;
	}
}
