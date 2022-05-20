#include<iostream>
#include<stdio.h>
using namespace std;
class student{
	int Roll;
	string Name;
	float Marks;
	public:
		Student(int r,string nm,float m)
		{
			Roll=r;
			Name=nm;
			Marks=m;
		}
		Student(Student &S)
		{
			Roll=S.Roll;
			Name=S.Name;
			Marks=S.Marks;
		}
		void Display()
		{
			cout<<"Roll:"<<Roll;
			cout<<"Name:"<<Name;
			cout<<"Marks:"<<Marks;
		}
};
int main()
{
	Student S1(2,"ABC",90);
	Student S2(S1);
	cout<<Display();
	cout<<"----";
	cout<<"Values in object S2";
	S2.Display();
}
