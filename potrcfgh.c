#include <stdio.h>
int isprime(int);
int main()
{
    int c,i,flag=1;
    printf("Enter a integer: ");
    // Reads character input from the user
    scanf("\n%d", &c);
    for(i=2;i<=c/2;i++)
    {
    	    if(isprime(i)==1)
    	    {
    	    	    if(isprime(c-i)==1)
    	    	    {
    	    	    	flag=0;
    	    	    	printf("\n%d %d",i,c-i);
					}

			}

	}
	if(flag==1){
	
	printf("not possible to frame");}
    
    return 0;
}
int isprime(int n)
{
	int i,flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
