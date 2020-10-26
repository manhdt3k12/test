#include<iostream>
using namespace std;
class Base{
	public:
		virtual ~Base();
};
Base::~Base(){
	cout<<"Pure virtual destructor is called"<<endl;
};
class Derived: Base{
	~Derived(){
		cout<<"~Derived() is executed";
	}
};
int main(){
	Base a;
	Derived *b;
	delete b;
	return 0;
}
