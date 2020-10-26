#include<iostream>
#include<tuple>
using namespace std;
int count_the_number(int arr[],int n, int k){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==k)
			count++;
}	
	return count;
}
int main(){
	int arr[]={5 ,7 ,8 ,8 ,5 ,8 ,7, 7 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int k;
	cout<<"Enter k: ";
	cin>>k;
	cout<<"Number of occurrence of "<<k<<" : "<<count_the_number(arr,n,k);
	return 0;
}
