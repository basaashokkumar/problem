#include <bits/stdc++.h>
using namespace std;
int helper(string s)
{
	bool isnum=false;
	bool iscap=false;
	if(s.length()<4)
	{
		return 0;
	}
	if(s[0]>=48 and s[0]<=57){
		return 0;
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==" " or s[i]=="/")
		{
			return 0;
		}
		else if(s[i]>=65 and s[i]<=90)
		{
			iscap=true;
		}
		else if(s[i]>=48 and s[i]<=57)
		{
			isnum=true;
		}
	}
	return (isnum and iscap);
}
int main()
{
	
	string s;
	cin>>s;
	cout<<helper(s);
	return 0;	
}
