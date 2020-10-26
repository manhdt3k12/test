#include<iostream>
#include<tuple>
using namespace std;
tuple<int, int , int> largest_three_element(int arr[],int size){
	int max1=0,max2=0,max3=0;
	for(int i=0;i<size;i++){
		if(arr[i]>=max1){
			max3=max2;
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]<max1&& arr[i]>=max2){
				max3=max2;
				max2=arr[i];
		}
		else if(arr[i]<max2&&arr[i]>max3)
				max3=arr[i];
	}
	return make_tuple(max1,max2,max3);
}
int main(){
	int arr[]={7,12,9,15,19,32,56,70};
	int size= sizeof(arr)/sizeof(arr[0]);
	int max1,max2,max3;
	tuple<int,int,int> p = largest_three_element(arr,size);
	cout<<"Three largest elements are: "<<get<0>(p)<<" "<<get<1>(p)<<" "<<get<2>(p);
	
	
	return 0;
}
