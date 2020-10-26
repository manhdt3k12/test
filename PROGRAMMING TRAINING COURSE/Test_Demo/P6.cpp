#include<iostream>
using namespace std;
bool check_number(int a){
	if(a%5==0&&a%11==0)
		return true;
	else
		return false;
}
int main(){
	int a;
	cout<<"Enter a: ";
	cin>>a;
	if(check_number(a))
		cout<<"The number is divisible by 5 and 11 both";
	else
		cout<<"The number is Not  divisible by 5 and 11 both";
	return 0;
}
