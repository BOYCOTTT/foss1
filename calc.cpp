#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	float a, b, res;
	char choice, ch;
	do
	{
		cout<<"enter two number";
		cin>>a>>b;
		cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			
			case '1' :
				res=a+b;
				break;
			case '2': res =a-b;
				break;
		

				
		}
		cout<<"Result = "<<res;
