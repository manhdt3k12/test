// multiset upper_bound() in C++ STL with Examples
// CPP program to demonstrate the 
// multiset::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  
    multiset<int> s; 
  
    // Function to insert elements 
    // in the multiset container 
    s.insert(10); 
    s.insert(13); 
    s.insert(13); 
    s.insert(25); 
    s.insert(24); 
  
    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 
  
    // when 10 is present 
    auto it = s.upper_bound(10); 
    cout << "\nThe upper bound of key 10 is "; 
    cout << (*it) << endl; 
  
    // when 2 is not present 
    // points to next greater after 2 
    it = s.upper_bound(11); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it) << endl; 
  
    // when 24 exceeds is the max element 
    it = s.upper_bound(24); 
    cout << "The upper bound of key 24 is "; 
    cout << (*it) << endl; 
  
    return 0; 
} 
// Output:
// The multiset elements are: 10 13 13 24 25 
// The upper bound of key 10 is 13
// The upper bound of key 2 is 13
// The upper bound of key 24 is 25