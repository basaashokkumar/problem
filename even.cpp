#include<stdio.h>
main()
{
int n,i;
printf("enter the value of n");
scanf("%d",&n);
int count=0;
	for(i=2;i*i<=n;i++)
		if(n%i==0)
			count++;
	if(count==0||n==1)
		printf("prime");
	else
		printf("not prime");
	return 0;
}
