#include<iostream>
using namespace std;

class Base
{
private:
int a;
	public:
		//default constructor 
	Base()
	{
	a=10;	
	}	
	
	//parameterized constructor
	Base(int y)
	{
		a=y;
	}
	void show()
	{
		cout<<"\nA="<<a;
	}
	
};

class derived:public Base
{
	private:
		float x;
		public:
			//default constructor
			derived()
			{
			//Base();
		     x=56.90;		
			}
			
	//paramterized constructor
	derived(float p):Base(100)	
	{
		x=p;
	}
	void show()
	{
		Base::show();
		cout<<"\nX="<<x;
	}
};
main()
{
	
	derived d1;
	d1.show();
	derived obj(45.66); //parameter
	obj.show();
	
}