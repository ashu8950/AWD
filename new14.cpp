#include<iostream>
#include<stdio.h>
using namespace std;
class complex{
	public:
	int a;
	int b;
	int c;
	int d;
	fun(){
		cout<<"Enter the no."<<endl;
		cin>>a;
		cout<<"Enter the second no."<<endl;
	    cin>>b;
	    cout<<"Enter the third no."<<endl;
	    cin>>c;
	    cout<<"Enter the fourth no."<<endl;
	    cin>>d;
	    
	}
	void disp(){
		cout<<"first complex no.is: "<<a<<"+"<<b<<"i"<<endl;
		cout<<"second complex no. is: "<<c<<"+"<<d<<"i"<<endl;
		cout<<"final complex no. is: "<<a+c<<"+"<<b+d<<"i";
	}
};
int main(){
	complex object1;
	object1.fun();
	object1.disp();
	
}
