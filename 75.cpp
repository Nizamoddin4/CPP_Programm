#include<iostream>
#include<string>
// It is example to change the access level of members of the Base class in the Derived class.
using  namespace std;
class Person{
	
	private:
	string s="Winner" ;
	public :
	
	void display()
	{
		cout<<"This is from the base class";
		cout<<"Changed for checking git version";
		cout<<"This is changed to check the push command";
<<<<<<< HEAD
		cout<<"This is example of the hot fix";
=======
		cout<<"This is issue1 branch created for learning branching"
		
>>>>>>> issue1
	}
}
class Student: private Person{
	// Eventhoug  is  private inheritance we are changing the access level.
	public:
		Person::s;// Since we are writing in the public block its access level changed from private to public.
		
}


int main()
{
	Student A;
	A.s="Looser";
	A.display();
}