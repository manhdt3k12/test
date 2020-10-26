// CPP program to demonstrate the 
// multiset::find() function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{   
    // Initialize multiset 
    multiset<char> s; 
  
    s.insert('a'); 
    s.insert('a'); 
    s.insert('a'); 
    s.insert('b'); 
    s.insert('c'); 
    s.insert('a'); 
    s.insert('a'); 
    s.insert('c'); 
  
    cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 
  
    // iterator pointing to 
    // position where 2 is 
    auto pos = s.find('b'); 
  
    // prints the set elements 
    cout << "\nThe set elements after b are: "; 
    for (auto it = pos; it != s.end(); it++) 
        cout << *it << " "; 
  
    return 0; 
} 
// Output:
// The set elements are: a a a a a b c c 
// The set elements after b are: b c c