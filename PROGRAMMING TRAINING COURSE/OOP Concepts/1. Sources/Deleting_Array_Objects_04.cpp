/* Deleting a void pointer */
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    void* ptr; // Creating void pointer 
  
    delete ptr; // Destroying void pointer 
  
    cout << "ptr deleted successfully"; 
    return 0; 
}
/* Output */
ptr deleted successfully