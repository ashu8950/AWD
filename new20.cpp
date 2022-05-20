#include<iostream>
#include<stdio.h>
using namespace std;
class counter{
	int id;
	public:
		counter(int i)
		{
			id=i;
			cout<<"constructor of object with id="<<id;
		}
		~counter()
		{
			cout<<"destructor with id="<<id;
		}
};
int main(){
	counter c1(1);
	counter c2(2);
	counter c3(3);
	cout<<"end output"<<endl;
}
