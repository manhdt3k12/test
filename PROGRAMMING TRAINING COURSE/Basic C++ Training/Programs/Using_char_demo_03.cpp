#include <iostream> 
#include <cstring> 
using namespace std; 
  
int main() 
{ 
    char s1[10] = "Hello"; 
  
    // return length of s1 
    cout << strlen(s1) << endl; 
  
    char s2[50]; 
  
    // copies s1 into s2 
    strcpy(s2, s1); 
    cout << s2 << endl; 
  
    char s3[10] = "World"; 
  
    // concatenates s3 into s2 
    strcat(s2, s3); 
    cout << s2 << endl; 
  
    char s4[50] = "HelloWorld"; 
  
    // return 0 if s2 and s4 are equal. 
    if (strcmp(s2, s4) == 0) 
        cout << "true" << endl; 
    else
        cout << "false" << endl; 
  
    char s5[30]; 
  
    // copies first 5 chars of s2 into s1 
    strncpy(s5, s4, 5); 
    cout << s5 << endl; 
  
    char target[10] = "Hello"; 
  
    // search for target string in s4 
    if (strstr(s4, target) != NULL) 
        cout << "true" << endl; 
    else
        cout << "false" << endl; 
  
    return 0; 
}
/* Output *//*
5
Hello
HelloWorld
true
Hello
true
*/
