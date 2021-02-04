#include<stdio.h>
#include<math.h>
int main()
{
	int m,flag=0,i;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			printf("\nnot prime");
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		{
			printf("prime");
		}
	return 0;
}
