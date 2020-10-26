#include<iostream>
#include<string.h>

using namespace std;
class Employee{
	string firstname;
	string lastname;
	public:
		Employee(const string,const string);
		~Employee();
		string getFirstName();
		string getLastName();
		void print()const;
};
Employee::Employee(const string first,const string last){
	firstname=first;
	lastname=last;
}
Employee::~Employee(){
	cout<<"Employee destructed";
}
string Employee::getFirstName() {return firstname;}
string Employee::getLastName(){return lastname;}
void Employee::print()const{
	cout<<"Name: "<<firstname<<" "<<lastname;}
class Manager:Employee{
	public:
		Manager(int salary):Employee()
};
int main(){
	return 0;
}
