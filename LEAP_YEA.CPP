#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	cout<<"Enter year: ";
	cin>>year;
	if((year%4==0 && year %100!=0))
		cout<<"Leap year";
	else
		cout<<"Not leap year";
		getch();
}