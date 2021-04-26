#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<a<<"\t"<<b<<endl;
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};

class B
{
	int m,n;
	public:
		B(A t)
		{
			m=t.geta();
			n=t.getb();
		}
		B()
		{
		}
		void display()
		{
			cout<<m<<"\t"<<n<<endl;
		}
};

int main()
{
	A a1;
	a1.setdata(5,6);
	a1.display();
	B b1;
	b1=a1;
	b1.display();
}
