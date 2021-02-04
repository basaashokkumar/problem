#include<stdio.h>
#include<math.h>
int main()
{
	int m,temp,r,rev=0;
	scanf("%d",&m);
	temp=m;
	while(m!=0)
	{
		r=m%10;
		rev=rev*10 + r;
		m=m/10;
		
	}
	if(temp==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
	return 0;
}
