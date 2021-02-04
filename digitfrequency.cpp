#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,count=0;
	cin>>n;
	int a[10]={0};
	while(n>=0)
	{
		r=n%10;
		a[r]++;
		n=n/10;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]>1)
		{
			count++;
		}
	}
	if(count==0)
		return -1;
	else return count;
}
