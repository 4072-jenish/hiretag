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