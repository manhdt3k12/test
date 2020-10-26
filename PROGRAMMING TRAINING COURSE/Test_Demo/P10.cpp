#include<iostream>
#include<tuple>
using namespace std;
tuple<int, int ,char> foo(int n1,int n2,int n3){
	return make_tuple(n2,n1,'a');
}
pair<int, int> foo1(int num1,int num2){
	return make_pair(num2,num1);
}
int main(){
	int n1,n2;
	char c;

	tie(n1,n2,c)=foo(10,5,'a');
	cout<<"Tuple: "<<n1<<" "<<n2<<" "<<c<<endl;
	pair<int,int> p;
	p=foo1(5,2);
	cout<<"Pair: "<< p.first<<" "<<p.second;
	
	
	
	
	return 0;
}
