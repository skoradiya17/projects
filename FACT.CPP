#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int n,i;
	long fact=1;
	clrscr();

	cout<<"Enter Number:";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial= "<<fact;
	getch();
}
