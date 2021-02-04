#include<iostream>
using namespace std;
class Car{
	int x,y;
	Car(int i, int j)
	{
		x=i;
		y=j;
	}
	void display()
	{
		cout<<"output is "<<x<<endl<<y<<endl;
	}
};
int main()
{
	Car Ford=Car(2,4);
	Ford.display();
	return 0;
}
