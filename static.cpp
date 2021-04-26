#include<iostream>
using namespace std;

void fun()
{
	static int x=10;
	x++;
	cout<<x<<endl;
}
int main()
{
	fun();
	fun();
	fun();
}
