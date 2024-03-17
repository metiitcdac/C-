
#include<iostream>
using namespace std;
class Test
{
	private:
		int a,b;
		float c;
	public:
		Test(int a)
		{
			this->a=a;
		}
		//function as an argument
		void set(int b,float c)  //100 200 78.56
		{
			//this->a=a;
			this->b=b;
			this->c=c;
		}
		void display()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
	

	
};
main()
{
	Test T1(100),T2(90);
	T1.set(200,78.56);
	T1.display();
	cout<<"\n--------------------";
	T2.set(8,23.56);
	T2.display();
}