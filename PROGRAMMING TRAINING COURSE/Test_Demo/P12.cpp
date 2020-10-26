#include<iostream>
using namespace std;
class B;
class A{
	int numA=5;
	public:
	friend int add(A a, B b);
};
class B{
	int numB=5;
	public:
	friend int add(A a, B b);
};
int add(A a, B b){
	return a.numA+b.numB;
}
int main(){
	A a;
	B b;
	cout<<"Sum: "<<add(a,b);
	return 0;
}
