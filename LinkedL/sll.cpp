#include<iostream>
using namespace std;
struct linkel{
	
	int n;
	struct linkel *next;
};
int main()
{
	cout<<"This is example of the linked list";
	int n;
	cout<<"Enter the number of nodes you want to create\n";
	cin>>n;
	cout<<"You requested for "<<n<<endl;
	linkel nl[n];

	
	
	for(int i=0;i<n;i++)
	{
		nl[i].n=i;
	}
	for(int i=0;i<n;i++)
	{
	  cout<<nl[i].n<<endl;
	}
	
//	assignning address of the one node to another
//  Here dynamic allocation is not happening.


}