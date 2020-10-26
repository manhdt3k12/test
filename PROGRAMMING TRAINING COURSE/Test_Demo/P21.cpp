#include<iostream>
using namespace std;
class dog
{
public:
    dog()
    {
       cout<<"Constructor called"<<endl;
    }

    ~dog()
    {
//       cout<<"Virtual method called - ~dog"<<endl;
    }

    virtual void seeCat(){
    	cout<<"Virtual method called - dog"<<endl;
	}
    
};

class Yellowdog : dog
{
public:
        
		Yellowdog(){
			cout<<"Derived class Constructor called"<<endl;;
		}
		void seeCat(){
        	cout<<"Virtual method called - ~dog"<<endl;;
		}
		
        void bark(string name)
        {
            cout<<" ";
        }
};

int main()
{	
    Yellowdog d;
    d.seeCat();
    return 0;
}
///* Output */
//Constructor called
//Virtual method called - dog
//Derived class Constructor called
//Virtual method called - ~dog
