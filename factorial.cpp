#include<stdio.h>
main()
{
	int n,i,mul=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
		printf("%d",mul);
	
	return 0;
}
