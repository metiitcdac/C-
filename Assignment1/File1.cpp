//getline

/*Write  a program scan 5 friend name and stored
inside the file*/

#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char name[20];
	int i;
	ofstream out;
	out.open("friend.txt");
	
	cout<<"Enter 5 Name";
	for(i=1;i<=5;i++)
	{
	cout<<"\nEnter Name ";
	gets(name);
	out<<name<<"\n";
	}
	out.close();
	//open file on read mode
	ifstream in;
	cout<<"\nFriend Details";
	in.open("friend.txt");
	in.seekg(0); //it is use to set the cursor at 1st position
	for(i=1;i<=5;i++)
	{
		in.getline(name,40);
		cout<<"\nName ="<<name;
	}
	
	in.close();
	

}