// 1st program to show that array and pointers are different 
#include <iostream> 
using namespace std; 
  
int main() { 
   int arr[] = {10, 20, 30, 40, 50, 60}; 
   int *ptr = arr; 
     
   // sizof(int) * (number of element in arr[]) is printed 
   cout << "Size of arr[] "<< sizeof(arr)<<"\n"; 
  
   // sizeof a pointer is printed which is same for all type  
   // of pointers (char *, void *, etc) 
   cout << "Size of ptr "<< sizeof(ptr);
    
   return 0; 
} 
/* Output *//*
Size of arr[] 24
Size of ptr 8
*/