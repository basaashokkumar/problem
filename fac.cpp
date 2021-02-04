#include<iostream>
#include<cmath>
using namespace std;
int fact(int);
int main()
{
	int n,m;
	cout<<"nter -->";
	cin>>m;
	n=fact(m);
	cout<<n;
	return 0;
}
int fact(int d)
{
	if(d==0 && d==0){
		return 1;
	}
	else{
		return d*fact(d-1);
	}
}
