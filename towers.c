#include <stdio.h>
#include<math.h>
void tower_of_hanoi(int,char,char,char);
int main()
{
    int disc,permits;
    printf("enter no of discs");
    scanf("%d",&disc);
    permits=pow(2,disc)-1;
    char src='S',des='D',aux='A';
    tower_of_hanoi(disc,src,des,aux);
    printf("\n%d",permits);
    return 0;
}
void tower_of_hanoi(int disc,char src,char des,char aux)
{
	if(disc==1)
	{
		printf("\n%c to %c",src,des);
		return;
	}
	
	tower_of_hanoi(disc-1,src,aux,des);
	printf("\n%c to %c",src,des);
	tower_of_hanoi(disc-1,aux,des,src);
	return 0;
	
}
