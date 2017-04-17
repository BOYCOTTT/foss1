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
		count<<"5.modulus\n";
		cout<<"6.Exit\n\n";
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			
			case '1' :
				res=a+b;
				break;
			case '2': res =a-b;
				break;
			case '3' :
				res=a*b;
				break;
			case '4' :
				res=a/b;
				break;
			case '5' :
				res=a%b;
				break;
			default :
				"number invalid"
				
		}
		cout<<"Result = "<<res;
