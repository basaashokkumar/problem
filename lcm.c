#include<stdio.h>
int main()
{
	int n,m,i,lcm;
	n=24;
	m=36;
	lcm=n>m?n:m;
	while(1)
	{
		if(lcm%n==0 && lcm%m==0)
		{
			break;
		}
		++lcm;
	}
		printf("%d ",lcm);
	return 0;
}
