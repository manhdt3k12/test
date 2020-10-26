#include<iostream>
using namespace std;
int square1(int n1){
	int	n=n1*10;
	cout<<"address of n1 in main(): "<<&n1<<endl;
	cout<<"address of n1 in square1(): "<<&n<<endl;
	cout<<"Square of n1:"<<n1<<endl;
	cout<<"Square of n:"<<n<<endl;
	return n1*n1;
}
void square2(int *n1){
	int n=*n1*10;
	cout<<"address of n1 in main(): "<<&n1<<endl;
	cout<<"address of n1 in main(): "<<&n<<endl;
	cout<<"Square of n1:"<<*n1<<endl;
	cout<<"Square of n:"<<n<<endl;
}
void square3(int &n1){
	int n=n1*10;
	cout<<"address of n1 in main(): "<<&n1<<endl;
	cout<<"address of n1 in main(): "<<&n<<endl;
	cout<<"Square of n1:"<<n<<endl;
	cout<<"Square of n:"<<n<<endl;
}
int main(){
	int n=10;
	square1(n);
	square2(&n);
	square3(n);
	return 0;
}
