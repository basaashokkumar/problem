#include<stdio.h>

	int main()
	{
		int i=1;
		while(i<=10)
		{
		l2:
		printf("%d\n",i);
		
	//	goto l;
		continue;
		i++;
		}
		l:
			printf("hello");
		//	goto l2;
		
		return 0;
	}

