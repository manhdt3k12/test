#include<iostream>
using namespace std;
int find_largest_small(int nums[],int n,int opt){
    int max=0,min=100;
    for(int i=0;i<=n;i++){
        if(nums[i]>max)
            max=nums[i];
        if(nums[i]<min)
            min=nums[i];
    }
    if(opt==0)
        return min;
    else if(opt==1)
        return max;
}
int main(){
    int arr[]={5,4,9,12,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int opt;
    cin>>opt;
    if(opt==0)
        cout<<"Small number is: "<<find_largest_small(arr,n,opt);
    else if(opt == 1)
    {
        cout<<" Largest number is: "<<find_largest_small(arr,n,opt);
    }
    
    return 0;
}
