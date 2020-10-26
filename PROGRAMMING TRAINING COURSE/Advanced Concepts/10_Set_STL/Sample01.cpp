#include <iostream> 
#include <set>
#include <iterator> 
#include <cmath>
  
using namespace std; 
  
int main() 
{ 
    // empty set container 
    set <int, greater <int> > s1;         
  
    // insert elements in random order 
    s1.insert(40); 
    s1.insert(30); 
    s1.insert(60); 
    s1.insert(20); 
    s1.insert(50); 
    s1.insert(50); // only one 50 will be added to the set 
    s1.insert(10); 
  
    // printing set s1 
    set <int, greater <int> > :: iterator itr; 
    cout << "\nThe set s1 is : "; 
    for (itr = s1.begin(); itr != s1.end(); ++itr)     
        cout << '\t' << *itr;    
    cout << endl; 
  
    // assigning the elements from s1 to s2 
    set <int> s2(s1.begin(), s1.end()); 
  
    // print all elements of the set s2 
    cout << "\nThe set s2 after assign from s1 is : "; 
    for (itr = s2.begin(); itr != s2.end(); ++itr)     
        cout << '\t' << *itr;     
    cout << endl; 
  
    // remove all elements up to 30 in s2 
    cout << "\ns2 after removal of elements less than 30 : "; 
    s2.erase(s2.begin(), s2.find(30),Compare::Compare()); 
    for (itr = s2.begin(); itr != s2.end(); ++itr)    
        cout << '\t' << *itr;    
  
    // remove element with value 50 in s2 
    int num; 
    num = s2.erase (50); 
    cout << "\ns2.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = s2.begin(); itr != s2.end(); ++itr)    
        cout << '\t' << *itr;     
  
    cout << endl; 
  
    //lower bound and upper bound for set s1 
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl; 
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl; 
  
    //lower bound and upper bound for set s2 
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl; 
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;   
    return 0;   
} 
/* Output *//*
The output of the above program is :
The set s1 is :      60    50    40    30    20    10
The set s2 after assign from s1 is : 10      20    30    40    50    60
s2 after removal of elements less than 30 : 30    40    50    60
s2.erase(50) : 1 removed     30    40    60
s1.lower_bound(40) : 40
s1.upper_bound(40) : 30
s2.lower_bound(40) : 40
s2.upper_bound(40) : 60
*/