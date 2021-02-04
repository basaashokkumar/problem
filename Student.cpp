#include<iostream>
using namespace std;
class Student{
	private:
		long long int rollno;
		char name[100];
	public:
	void scan()
	{
		rollno =316126510004;
		cin>>name;
	}
	friend int display(Student j);
	
};
int display(Student j)
{
		cout<< j.rollno;
	}
int main()
{
	Student s;
	s.scan();
	display(s);
	//s.display();
	//return 0;
}
