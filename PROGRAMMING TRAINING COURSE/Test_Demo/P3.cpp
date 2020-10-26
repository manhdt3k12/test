#include<iostream>
using namespace std;
void sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
}
using namespace std;
int main(){
	int a[]={4,5,9,12,9,22,45,7};
	int n= sizeof(a)/sizeof(a[0]);
	sort(a,n);
	int k;
	cout<<"ENter K : ";
	cin>>k;
	cout<<"Largest "<<k<<" Element: ";
	for(int i=n-1;i>n-k-1;i--){
		cout<<a[i]<<" ";}
	
	return 0;
}
