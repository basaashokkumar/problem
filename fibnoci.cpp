#include<stdio.h>
main()
{
	int n,i,sum,first=0,sec=1;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("%d %d ",first,sec);
	for(i=1;i<=n;i++)
	{
		sum=first+sec;
		printf("%d ",sum);
		first=sec;
		sec=sum;
	}
	return 0;
}
