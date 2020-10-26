#include<iostream>
using namespace std;
int find_max(int num1,int num2,int num3){
	int max=0;
	if(num1>num2&&num1>num3)
		max=num1;
	else if(num2>num1&&num2>>num3)
		max=num2;
	else
		max= num3;
	return max;
}
int main(){
	int num1,num2,num3;
	cout<<"Enter num1,2,3: ";
	cin>>num1>>num2>>num3;
	cout<<"Maximum is: "<<find_max(num1,num2,num3);
	return 0;
}
