#include<iostream.h>
#include<conio.h>
class A
{
	static int a;
	public:
		A()
		{
			cout<<"\nObject Created-"<<++a;
		}
		~A()
		{
			cout<<"\nObject Destroyed-"<<a--;
		}
};
int A::a;
void main()
{
	clrscr();
	A a1,a2;
	{
		A a3;
	}
	A a4;
	{
		A a5;
	}
	A a6;
	getch();
}