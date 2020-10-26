#include<iostream>
using namespace std;
bool check_year(int year){
	if(year%4==0&&year%100!=0||year%400==0)
		return true;
	else
		return false;
}
int main(){
	int year;
	cout<<"Enter Year: ";
	cin>>year;
	if(check_year(year))
		cout<<"The year is leap year";
	else
		cout<< "Year is normal year";
		return 0;
}
