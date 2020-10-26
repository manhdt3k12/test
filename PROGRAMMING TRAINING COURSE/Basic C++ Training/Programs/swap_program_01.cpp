// C++ program for illustration of swap() function 
#include <bits/stdc++.h> 
using namespace std; 
  
int swap_program_01() 
{ 
    int a = 10; 
    int b = 20; 
    cout << "Value of a before: " << a << endl; 
    cout << "Value of b before: " << b << endl; 
  
    // swap values of the variables 
    swap(a, b); 
    cout << "Value of a now: " << a << endl; 
    cout << "Value of b now: " << b << endl; 
    return 0; 
} 
/* Output *//*
Value of a before: 10
Value of b before: 20
Value of a now: 20
Value of b now: 10
*/
