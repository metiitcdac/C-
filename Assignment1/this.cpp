/*
Write a program create person class
and print largest age between two person using
this pointer
*/
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	
	private:
		int age;
		char name[30];
	public:
		//parameterized constructor
		person(int age,char name[])
		{
			this->age=age;
			strcpy(this->name,name);
			
		}
		
		void show()
		{
			cout<<"\nAge="<<age<<"\nName of Person="<<name;
		}
		
		//return object
		person comp(person &obj) //obj represent to p2
		{
			if(age>obj.age)// 30>20 
			return *this;
			else
			return(obj);
		
		}
};

main()
{
	person p1(20,"Jack");
	person p2(30,"Jill");
	person temp(0,"Null");
	p1.show();
	p2.show();
	temp.show();
	cout<<"\n-----------------";
	temp=p1.comp(p2); // call comp function for p1 object and pass p2 as a parameter
	//return object stored inside the temp;
	//temp.show();
		//-------------------
	temp=p2.comp(p1); //call comp function for p2 and pass p1 as paramter
	temp.show();
	
}