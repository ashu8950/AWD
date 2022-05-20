#include<iostream>
#include<stdio.h>
using namespace std;
class shape{
	public:
		int a;
		int b;
		void shape(int r,int h)
		a=r;
		b=h;
};
class area:public shape{
	public:
		
		area()
		{
			cout<<"area of cylinder"<<2*3.14*r*h <<endl;
		}
};
class volume:public shape{
	public:
		volume()
		{
			cout<<"voume of cylinder"<<3.14*r*r*h<<endl;
		}
};
class final:publc volume,public area{
	public:
};
int main(){
	final obj(5,6);
	return 0;
}
