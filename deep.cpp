#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	public:
		int *p;
		int n;
		A()
		{
			p=NULL;
			n=0;
		}
		A(int n)
		{
			this->n=n;
			p=new int[n];
		}
		A(A &obj)
		{
			n=obj.n;
			p=new int[n];
			for(int i=0;i<n;i++)
			p[i]=obj.p[i];
		}
		void display()
		{
			for(int i=0;i<n;i++)
			cout<<p[i]<<"\t";
			cout<<endl;
		}
		~A()
		{
			delete []p;
		}
};

int main()
{
	A a1(3);
	a1.p[0]=10;
	a1.p[1]=20;
	a1.p[2]=30;
	
	A a2(a1);
	a2.p[0]=11;
	
	a1.display();
	a2.display();
	getch();
	return 0;
}
