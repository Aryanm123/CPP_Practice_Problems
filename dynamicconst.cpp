#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int *p;
	int n;
	public:
		A();
		A(int);
		void getdata();
		void sort();
		void display();
		~A();
};

A::A()
{
	n=0;
	p=NULL;
}

A::A(int n1)//dynamic constructor
{
	n=n1;
	p=new int[n];
}
void A::getdata()
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number : "<<endl;
		cin>>p[i];
	}
}

void A::display()
{
	for(int i=0;i<n;i++)
		cout<<p[i]<<endl;
}

void A::sort()
{
	//Selection
	for(int i=0;i<n-1;i++)
	{
		for(int j=j+1;i<n;j++)
		{
			if(p[i]>p[j])
			{
				int t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}

A::~A()//Dynamic Destructor
{
	delete[]p;
}

int main()
{
	int x;
	cout<<"Enter number of element : ";
	cin>>x;
	A a1(x);
	a1.getdata();
	a1.sort();
	a1.display();
	getch();
	return 0;
}



