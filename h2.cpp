/*
Q2. WAP with a mother class and an inherited daugther class.
Both of them should have a method void display ()that prints a message (different for mother and daugther). 
In the main define a daughter and call the display() method on it.
*/
#include<iostream>

using namespace std;

class Mother{

	public:
		void Display(){
        
			cout<<"This message from Mother Class "<<endl;
            
		}
};
class Daughter : public Mother
{
	public:
		void Display(){
        
			cout<<"This messagefrom Daughter Class "<<endl;
            
		}
};
int main(){

	Daughter d;
    
	d.Mother::Display();
    
	d.Display();
    
	return 0;
}
