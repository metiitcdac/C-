#include<iostream>

using namespace std;
class Emp
{
	private:
		int id,salary;
		char name[30];
	public:
		void set(int d,char z[],int s)
		{
			id=d;
			strcpy(name,z);
			salary=s;
			
		}
		
		void show()
		{
			cout<<"\nId="<<id<<"\nName="<<name<<"\nSalary="<<salary;
		}
		
		int fun()
		{
			return(salary);
		}
};

main()
{
	int size=3,i,total=0;
	
	Emp *obj=new Emp[size];
	Emp *ptr=obj;
	int myid,sal;
	char ename[50];
	cout<<"\nEnter 3 Employee information";
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter value for id name & salary";
		cin>>myid>>ename>>sal;
	obj->set(myid,ename,sal);
	total=total+obj->fun();
	obj++;
		
	}
	
cout<<"\nInformation";
for(i=0;i<size;i++)
{
	ptr->show();
	ptr++;
}

cout<<"\nTotal salary="<<total;
	
}

