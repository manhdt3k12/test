/* C++ program to check whether a character is alphabet or not
Write a C++ program to input a character from user and check whether the given 
character is alphabet or not using if else. How to check whether a character 
is alphabet or not in C++ programming. Logic to check if a character is alphabet 
or not in C++ program.

Example
Input
Input character: a

Output
'a' is alphabet

Program to check alphabets
/**
 * C++ program to check whether a character is alphabet or not
 */
#include <iostream>
using namespace std;
int main() {
    char ch;

    /* Input a character from user */
    cout<<"Enter any character: ";
    cin>>ch;
    
    //ASCII
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))   
        printf("Character is an ALPHABET.");   
    else   
        printf("Character is NOT ALPHABET.");      
      
    return 0;
}