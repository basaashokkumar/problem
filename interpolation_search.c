#include<stdio.h>
#include<math.h>
int interpolation_search(int *a,int l,int h,int ke);
int main()
{
	int a[4]={4,6,2,8};
	int i,j,key=8,low,high,result;
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
	low = 0;
	high = 3;
	result = interpolation_search(a,low,high,key);
	printf("key found at %d",result);
	return 0;
}
int interpolation_search(int *a,int lo,int hi,int key)
{
	int pos;
	
	//printf("%d",a[mid]);
	while(lo<hi)
	{
		pos=lo+((key-a[lo])*(hi-lo)/(a[hi]-a[lo]));
		if(a[pos]==key)
		{
			return pos;
		}
		else if(a[pos]<=key)
		{
			lo=pos+1;
		}
		else
		{
			hi=pos-1;
		}
	}
}
