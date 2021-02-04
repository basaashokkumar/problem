#include<stdio.h>
int main()
{
	int x,y,sum=0;
	printf("enter the values of x and y");
	scanf("%d %d",&x,&y);
	while(x>0){
		
		sum=sum+y;
		x--;
		
	}
	printf("\nthe multiplication is %d",sum);
	return 0;
}
