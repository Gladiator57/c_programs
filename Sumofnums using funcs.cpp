#include<iostream>
using namespace std;
class demo
{
	public:
		void display(int a,int b)
		{
			cout<<"A ="<<a<<endl;
			cout<<"B ="<<b<<endl;
		}
		void abu(int a,int b)
		{
			cout<<"A+B="<<a+b<<endl;
		}
};
int main()
{
	int a;
	int b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	demo obj;
	obj.display(a,b);
	obj.abu(a,b);
	return 0;
}
