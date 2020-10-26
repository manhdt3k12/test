/* Example 3: Overloading this [ ] operator */
#include <iostream> 
using namespace std; 
class overload { 
    int a[3]; 
  
public: 
    overload(int i, int j, int k) 
    { 
        a[0] = i; 
        a[1] = j; 
        a[2] = k; 
    } 
    int operator[](int i) 
    { 
        return a[i+1]; 
    } 
}; 
int main() 
{ 
    overload ob(1, 2, 3); 
    cout << ob[1]; // displays 2 
    return (0); 
} 
/* Output */
// 2