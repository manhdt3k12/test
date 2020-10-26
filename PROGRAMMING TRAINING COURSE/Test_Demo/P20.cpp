#include<iostream>
using namespace std;
class Student{
	string midName,lastName,firstName;
	int sbd;
	int age;
	double score;
	public:
	void getStudent(string firstName,string midName,string lastName,int sbd,int age,double score){
			this->firstName=firstName;
			this->midName=midName;
			this->lastName=lastName;
			this->sbd = sbd;
			this->age =age;
			this->score=score;
		}
	void showStudent(){
		cout<<"rollNo: "<<sbd<<endl;
		cout<<"fullName: "<<firstName<<" "<<midName<<" "<<lastName<<endl;
		cout<<"age:	"<<age<<endl;
		cout<<"score: "<<score<<endl;
		
	}
};
int main(){
	int sbd,age;
	string firstName,midName,lastName;
	double score;
	Student *p=new Student;
		cout<<"Enter Object "<<endl;
		cout<<"full name: ";
		cin>>firstName>>midName>>lastName;
		cout<<"Sbd: ";
		cin>>sbd;
		cout<<"Age: ";
		cin>>age;
		cout<<"Score: ";
		cin>>score;
		p->getStudent(firstName,midName,lastName,sbd,age,score);
		
	

		cout<<endl;
		cout<<"---Object ---"<<endl;
		cout<<endl;
		p->showStudent();

	
	
}
