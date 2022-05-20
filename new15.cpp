#include<iostream>
#include<stdio.h>
using namespace std;
class cube
{
	public:
		int side;
		public :
			cube()
			{
				side=10;
			}
};
int main()
{
	cube c;
	cout<<"value is :"<<c.side;
}
