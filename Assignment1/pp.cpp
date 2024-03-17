#include<iostream>
using namespace std;

class Test
{
	private:
		int a;
		float b;
	public:
		void get()
		{
			cout<<"Enter a and b";
			cin>>a>>b;
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b;
		}
		
		//destructor 
		~Test()
		{
			cout<<"\nObject Destroyed";
		}
};

main()
{
	Test t1[5]; //array object
	Test *ptr;  //pointer object
	ptr=new Test;
	ptr=t1; //valid 
	
}