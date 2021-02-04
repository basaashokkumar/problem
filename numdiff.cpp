#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(int n,int a[],int num,int diff)
{
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(abs(a[i]-num)<=diff)
		{
			count++;
		}
	}
	return count>0 ? count :-1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num;
	cin>>num;
	int diff;
	cin>>diff;
	cout<<helper(n,a,num,diff);
	return 0;
}
