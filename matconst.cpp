#include<iostream>
using namespace std;

class matrix
{
	int r,c;
	int a[10][10];
	public:
		matrix();
		matrix(int,int);
		void input();
		matrix sum(matrix);
		void display();
};

matrix :: matrix()
{
	r=c=0;
}

matrix :: matrix(int r,int c)
{
	this->r=r;
	this->c=c;
}

void matrix :: input()
{
	int i,j;
	cout<<"Enter the row and column : "<<endl;
	cin>>r>>c;
	cout<<"Enter the element of matrix :"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}

matrix matrix::sum(matrix m)
{
	matrix t(r,c);
	if(r!=m.r)
	cout<<"Matrix can't be addede";
	else
	{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t.a[i][j]=a[i][j]+m.a[i][j];
		}
	}
	return t;
    }
}

void matrix::display()
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	matrix m1,m2,m3;
	m1.input();
	m2.input();
	m3=m1.sum(m2);
	m3.display();
}
