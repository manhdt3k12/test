/* To return multiple values */
// C++ program to demonstrate that using a pointer 
// we can return multiple values. 
#include <bits/stdc++.h> 
using namespace std;
  
void fun(int n, int* square, double* sq_root) 
{ 
    *square = n * n; 
    *sq_root = sqrt(n); 
} 
  
int main() 
{ 
  
    int n = 100; 
    int* sq = new int; 
    double* sq_root = new double; 
    fun(n, sq, sq_root); 
    cout << *sq << " " << *sq_root; 
    return 0; 
}
/* Output */
// 10000 10