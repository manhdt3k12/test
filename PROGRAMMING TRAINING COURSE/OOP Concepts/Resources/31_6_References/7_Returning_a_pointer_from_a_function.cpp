#include <iostream>   
using namespace std;   
int global_var = 42; 
  
// function to return a pointer 
int* returnPointerValue() 
{ 
    cout<<"global_var: "<< &global_var <<endl;
    return &global_var; 
}
   
int main() 
{ 
    int var = 23; 
    int* ptr_to_var = &var;   
    cout << "Return a pointer from a function " << endl;   
    cout << "Before :" << *ptr_to_var << endl; // display 23   
    ptr_to_var = returnPointerValue();   
    cout << "After :" << ptr_to_var << endl;
    cout << "After :" << *ptr_to_var << endl; // display 42   
    return 0; 
}
/* Output *//*
Return a pointer from a function 
Before :23
global_var: 0x405004
After :0x405004
After :42
*/