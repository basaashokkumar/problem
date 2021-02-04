#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	bool found=false;
	cout<<"enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int data;
	cin>>data;
	for(int i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			found=true;
			break;
		}
	}
	if(found==true)
	{
		cout<<"found";
	}
	else
	{
		cout<<"not found";
	}
}
