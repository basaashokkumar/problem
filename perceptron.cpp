#include<stdio.h>

float ip[3][3],wt[3],n=0.01,d[3],y[3],vk=0;
int i,j,count=0,k;
ip[0][0]=1;
ip[1][0]=1;
ip[2][0]=1;
printf("Enter the inputs other than bias")
	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			scanf("%f",&ip[i][j]);
		}
	}
	printf("Enter the weights");
	for(i=0;i<3;i++)
	{
		scanf("%f",&wt[i]);
	}
	printf("Enter the desired outputs");
	for(i=0;i<3;i++)
	{
		scanf("%f",&d[i]);
	}
	i=0
while(1)
{
loop:
	if(count==3)
	{
		break;
	}
	else
	{
			for(j=0;j<3;j++)
			{
				vk+=wt[j]*ip[i][j];
				
					if(vk>=0)
					{
						y=1;
					}
					else
					{
						y=-1;
					}
				if(y!=d[i])
				{
					for(k=0;k<3;k++)
					{
						wt[k]+=wt[k]+(n(d[i]-y)*ip[i][j])
					}
					i=0;
					count=0;
					goto loop;
				}
				else
				{	
					i++;
					count++;
					continue;
				}
			
			}
			
			}
	}
	for(i=0;i<3;i++)
	{
		printf("Weight %d : = %d",i+1,wt[i]);
	}
	}	
