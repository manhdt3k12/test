#include<iostream>
using namespace std;
bool check_year(int year){
	if(year%4==0&&year%100!=0||year%400==0)
		return true;
	else
		return false;
}
int get_day(int month, int year){
	switch (month){
	case 2:
			return 28;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 11:
		return 31;
	default:
		return 30;
	
	}
	
}
int main(){
	int year,month;
	cout<<"Enter month number: ";
	cin>>month;
	if(month==2){
		cout<<"Enter year: ";
		cin>>year;
		if(check_year(year))
			cout<<get_day(month,year)+1<<" days";
	}
	else
		cout<<get_day(month,year)<<" days";
	
	return 0;
}
