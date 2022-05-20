#include<iostream>
#include<stdio.h>
using namespace std;
class counter
{
	int c;
	public:
		counter(int a)
		{
			c=a;
		}
		counter(counter&ob)
		{
			cout<<"copy constructor invoked";
			c=ob.c;
		}
		void show()
		{
			cout<<c;
		}
};
int main()
{
	counter c1(10);
	counter c2(c1);
	c1.show();
	c2.show();
	return 0;
}

