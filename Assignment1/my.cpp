/* 
Single Inherince
Write a program create 
--A class  and perform c=a+b
-- create B class in this perform
ans=(p*q)+c
A class inherit inside the B class

*/
#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
		protected:
		int c;
	public:
		void add()
		{
			cout<<"\nEnter value for a and b";
			cin>>a>>b;
			c=a+b;
		}
		void show_Base()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
	
};
class B :public A
{
	private:
		int p,q,ans;
	public:
		void multi()
		{
			cout<<"\nEnter value for p and q";
			cin>>p>>q;
			ans=(p*q)+c;
		}
		void show()
		{
			
			cout<<"\nP="<<p<<"\nQ="<<q<<"\nans="<<ans;
		}	
};


main()
{
B obj;
obj.add(); //A
obj.multi();//B
obj.show_Base();
obj.show();

	
	
}