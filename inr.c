#include<stdio.h>
#include<math.h>
int main()
{
	int y=0,z=0;
		//printf("num is  : %d",y);
	int x=1;
	while(x<10)
	{
//	y+=++x;
	z+=x++;
	}
	//printf("%d",y);
	printf("\n%d",z);

//	printf("\nbsd : %d",x);
	return 0;
}
