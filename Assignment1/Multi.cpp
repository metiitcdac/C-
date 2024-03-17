/*
Multiplie Inheritance

class first
	define  a,b,c and perform c=a+b;
	defined c as a protected variable
class second
	 define p,ans;
	 defined ans as protected
	 ans=p+p;
class derived
	perform dans=c+ans;
	
-- first  scanfirst() print()
--second  scan()  print()
--der	set()
	
*/


#include<iostream>
using namespace std;
class first
{
private:
int a,b;
protected:
int c;
public:
	void scanfirst()
	{
		cout<<"\nEnter value for a and b";
		cin>>a>>b;
		c=a+b;
		print();
		}	
	void print()
	{
		cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
	}
};

class second
{
private:
int p;
protected:
int ans;
public:
	void scan()
	{
		cout<<"\nEnter value for p";
		cin>>p;
		ans=p+p;
		print();
		}	
	void print()
	{
		cout<<"\nP="<<p<<"\n=Ans="<<ans;
	}
};

class der :public first,public second
{
private:
int d;
public:
void set()
{
	d=c+ans;
	cout<<"\nAns="<<d;
	
	}	
};
main()
{
der myobj;	
myobj.scanfirst();
myobj.scan();
myobj.set();


}