#include<iostream>
#include<stdio.h>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"cons of base"<<endl;
		}
};
class Derived:public Base
{
	public:
		Derived(){
			cout<<"cons of Derived"<<endl;
		}
};
int main(){
	Derived obj;
}
