
#include<iostream>
using namespace std;

class ShopItem
{
	private:
    int id;
    char name[30];
    float price;
    public:
    	//function as an argument
        void setData(int a, float b,char s[])
		{
            id = a;
            price = b;
            strcpy(name,s);
        }
        
		void getData()
		{
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
 			cout<<"Name of this item is "<<name<<endl;
        }
};

 main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    //*ptr is pointer object which occupied the space for 3 object
    ShopItem *ptrTemp = ptr;
    //*ptrTemp is pointer object which point out ptr object
    int p, i;
    char n[30];
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price and name of item "<< i+1<<endl;
        cin>>p>>q>>n; //100 90.40 Pen
        // (*ptr).setData(p, q);
        ptr->setData(p, q,n); //100 90.40 pen
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    
}