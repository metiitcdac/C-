/*
Write a program scan string from console
using getline()
*/

#include<iostream>
using namespace std;
main()
{
	char str[50];
	cout<<"\nEnter City Name";
	cin>>str;
	cout<<"\nCity Name="<<str;
	
	cout<<"\nEnter City Name";
	cin.getline(str,30);
	cout<<"\nCity Name="<<str;
	
	cout<<"\nEnter City Name";
	cin.getline(str,30);
	cout<<"\nCity Name="<<str;
	
}