#include<iostream>
#include<stdio.h>
using namespace std;
class base{
	public:
		void display(){
			cout<<"base+base"<<endl;
		}
};
class derived:public base{
	void display(){
		cout<<"void is derived"<<endl;
	}
};
int main(){
	base *pptr= derived;
	base.display();
	return 0;
}
