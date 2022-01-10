#include<iostream>
using namespace std;
const int m=50;
class items
{
	int itemcode[m];
	float itemPrice[m];
	int count;
	public:
		void CNT()
		{
			count = 0;
		}
		void getitem();
		void display();
		void displaysum();
		void remove();
		void displayItems();
};
void items :: getitem()
{
	cout<<"Enter item code :";
	cin>>itemcode[count];
	cout<<"Enter item cost :";
	cin>>itemPrice[count];
	count++;
}
void items :: displaysum()
{
	float sum =0;
	for(int i=0;i<count;i++)
	{
		sum = sum+itemPrice[i];
	}
	cout<<"\nTotal Value :"<<sum<<"\n";;
	
}
void items :: remove()
{
	int a;
	cout<<"Enter item code: ";
	cin>>a;
	for(int i=0;i<count;i++)
	   if(itemcode[i] == a)
	       itemPrice[i] = 0;
 } 
 void items :: displayItems()
 {
 	cout<<"\n Code Price\n";
 	for(int i=0;i<count;i++)
 	{
 		cout<<"\n"<<itemcode[i];
 		cout<<" "<<itemPrice[i];
	 }
	 cout<<"\n";
 }
int main()
{
 items order;
 order.CNT();
 int x;
 do{
 	cout<<"\n you can do the following:";
 	cout<<"Enter Appropriate number \n";
 	cout<<"\n1 : Add an item";
 	cout<<"\n2 : Display Total Value";
 	cout<<"\n3 : Delete an item";
 	cout<<"\n4 : Display all items";
 	cout<<"\n5 : Quit";
 	cout<<"\n\n Choice : ";
 	cin>>x;
 	 switch(x)
 	 {
 		case 1:
 			order.getitem();
 			break;
 		case 2:
		    order.displaysum();
		    break;
		case 3:
		    order.remove();
			break;
		case 4:
		    order.displayItems();
			break;
		case 5:
		    break;
		default:
		   cout<<"Invalid Output\n"	;
	

		 	
	 }
 	
   }while(x!=5);
	 

}
