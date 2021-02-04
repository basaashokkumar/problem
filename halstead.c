#include<stdio.h>
#include<math.h>
#define max 10
int main()
{
	int rows,i,j,edges,nodes,k;
	printf("enter the no of rows");
	scanf("%d",&rows);
	int mat[max][max];
	printf("\n enter the graph");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			scanf("%d",&mat[i][j]);
		}	
	}
	edges=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			if(mat[i][j]==1)
			{
				edges++;
			}
		}
		printf("\n");
	}
	nodes=rows;
	printf("%d\n%d\n%d",edges,nodes,(edges-nodes+2));
	
	return 0;
}

