#include<stdio.h>
int fac(int);
int main()
{
	int n,s=0,i,d;
	printf("enter");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		d=fac(i);
		s=s+i/d;
	}
	printf("%d ",s);
return 0;	
}
int fac(int i)
{
	if(i==0||i==1)
	return 1;
	else
	return i*fac(i-1);
}
