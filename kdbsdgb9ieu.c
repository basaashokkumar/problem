#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	printf("enter rows");
	scanf("%d",&n);
	for(i=1;i<=n;++i,k=0)
	{
		
		for(j=1;j<=n-i;j++)
		{
			printf("  ");	
		}
		while(k != 2*i-1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}
	for(i=n-1;i>=1;--i,k=0)
	{
		
		for(j=1;j<=n-i;j++)
		{
			printf("  ");	
		}
		while(k != 2*i-1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}
	return 0;
}
