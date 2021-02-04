#include<stdio.h>
int main()
{
	char name[10],reverse[10];
	int i,length=0;
		scanf("%[^\n]s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
/*	for(i=length;i>=0;i--){
		printf("%c",name[i]);
	}
*/
int j=0;
for(i=length;i>=0;i--){
		reverse[j]=name[i];
		j++;
	}
	for(i=0;i<=length;i++){
	
printf("%c",reverse[i]);}	
printf("\n%s and length is %d",name,length);
	return 0;
}
