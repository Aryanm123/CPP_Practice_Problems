#include<iostream>
using namespace std;

class complex
{
	int real,imag;
	public:
		void input()
		{
			cout<<"Enter the value of real and imaginary : "<<endl;
			cin>>real>>imag;
		}
		
		complex operator + (complex c)
		{
			complex t;
			t.real=real+c.real;
			t.imag=imag+c.imag;
			return t;
		}
		
		void display()
		{
			cout<<"The sum is :"<<endl;
			cout<<real<<"\t"<<imag;
		}
};

int main()
{
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1+c2;
	c3.display();
}
