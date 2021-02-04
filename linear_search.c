#include<stdio.h>
#include<math.h>
int main()
{
	int a[4]={4,6,1,9};
	int i,j,key=4;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[j]<=a[i])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d ",a[i]);
		if(key==a[i])
		{
			printf("\t key found\n");
			break;
		}
		else{
			printf("\t key not found\n");
		}
	
	}
	
	return 0;
}
