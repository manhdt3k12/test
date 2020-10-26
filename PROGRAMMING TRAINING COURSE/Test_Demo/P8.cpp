#include<iostream>
using namespace std;
bool check_character(char a){
	if(a>=65&&a<=90||a>=97&&a<=122)
		return true;
	else
		return false;
}
int main(){
	char a;
	cout<<"Enter Char a: ";
	cin>>a;
	if(check_character(a))
		cout<<"Is Alphabet. ";
	else
		cout<<"Not alphabet";
	return 0;
}
