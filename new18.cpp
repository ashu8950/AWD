#include<iostream>
#include<stdio.h>
using namespace std;
class demo{
	const char*p;
	pubic:
		demo()
		{
			p=new char[6];
			p="hello";
		}
		void display()
		{
			cout<<p<<endl;
		}
};
int main()
{
	demo obj;
	obj.display();
}
