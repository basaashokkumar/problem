#include<stdio.h>
#include<math.h>
int main()
{
	int t,i,j,b[15],k;
  	scanf("%d ",&t);
  	int a[15];
  	for(i=0;i<t;i++)
    {
		scanf("%d ",&a[i]);
    }
  	j=0;
  	for(j=0;j<t;j++)
	  { 
  	for(i=1;i<=a[j];i++){
		if(a[j]%i==0){
          k=0;
          b[k]=i;
          k++;
        }
    }
	}
      for(i=0;i<k;i++)
      {
        printf("%d ",b[i]);
      }
  	
  	return 0;
}
