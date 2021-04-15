#include<iostream>
using namespace std;

namespace a
{
	class b
	{
		public:
		void f()
		{
		cout<<"Hello";
	}
	};
}
using namespace a;
int main()
{
	b b1;
	b1.f();
}
