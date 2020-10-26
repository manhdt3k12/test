#include <iostream>
#include <list>
using namespace std; 
  
int main() 
{ 
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    demoList.push_back(10); 
    demoList.push_back(20); 
    demoList.push_back(20); 
    demoList.push_back(30); 
    demoList.push_back(40); 
  
    // List before removing elements 
    cout << "List before removing elements: "; 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 
  
    // delete all elements with value 20 
    demoList.remove(20); 
  
    // List after removing elements 
    cout << "\nList after removing elements: "; 
    for (auto itr = demoList.begin(); 
         itr != demoList.end(); itr++) { 
        cout << *itr << " "; 
    } 
  
    return 0; 
} 
/* Output *//*
List before removing elements: 10 20 20 30 40 
List after removing elements: 10 30 40
*/