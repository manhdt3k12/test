#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v(5,10);

	cout<<"The vector elements are: ";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	v.push_back(10);
	//
	v.pop_back();
//
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
//
//	v.insert(0,begin);
	//
	cout<<v.front();
	
}
//
	
