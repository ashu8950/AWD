#include<iostream>
using namespace std;
class MyFirstClass
{
	public:
	int variable1;
};
int main(){
	MyFirstClass object1;
	object1.variable1=10;
	cout<<object1.variable1;
	return 0;
}
