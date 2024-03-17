/*
Write a program of single inheritance create 
FE class
	rollno
	name
	total ( 3 sub)
SE class
	total (3 sub)
	per=FEtotal+total/6
	

*/
#include<iostream>
using namespace std;
class FE
{
	private:
		int rollno;
		char name[20];
		protected:
			int total;
	public:
		void read()
		{
			cout<<"\nEnter roll no name and total marks";
			cin>>rollno>>name>>total;
		}
		
};
class SE:public FE
{
	private:
		int tot,f;
		float per;
		public:
		void get()
		{
			cout<<"\nEnter marks";
			cin>>tot;
			f=total+tot;
			per=f/6; 
			
		}
		
		void display()
		{
			cout<<"\nFinal Total="<<f<<"Percentage="<<per;
		}
};

main()
{
	SE myobj;
	myobj.read();
	myobj.get();
	myobj.display();
}
