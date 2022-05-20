#include<iostream>
#include<stdio.h>
using namespace std;
class Base{
	protected:
		Base(){
			cout<<"hello"<<endl;
		}
};
class Derived:protected base
{
	public:
		Derived(){
			cout<<"cons of Derived"<<endl;
		}
};
int main(){
	Derived obj;
	obj.disp();
}
