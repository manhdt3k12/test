/* Using std::string
Syntax:
std::string str = "This is IMIC Technology"; */
// CPP program to illustrate
// std::string functions
#include <iostream>
using namespace std;

int main()
{
    // string assignment
    string s1 = "Hello";
    string s2 = "World";

    // return length of string
    cout << s1.size() << endl; // 5
    cout << s2.length() << endl; // 5

    // concatenate string using + operator.
    s1 = s1 + s2;
    cout << s1 << endl; // HelloWorld

    // append string
    s1.append("IMIC");
    cout << s1 << endl; // HelloWorldIMIC

    string s3 = "HelloWorldIMIC";

    // compare two strings
    if (s1.compare(s3) == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    // substring of string s1
    // substr(pos, length_of_substring)
    string sub = s1.substr(0, 5);
    cout << sub << endl; // Hello

    // insert into string
    // insert(pos, string)
    s1.insert(10, "Mr");
    cout << s1 << endl; // HelloWorldMrIMIC

    string target = "World";

    // find a target string in s1
    size_t pos = s1.find(target);
    if (pos != std::string::npos) // npos=-1
        cout << "Found at Position:" << pos << endl; // pos=5

    // replace a portion of string s1
    // replace(pos, length_of_portion, string_to_replace)
    cout << s1.replace(5, 5, "Technology") << endl; // HelloTechnologyMrIMIC

    return 0;
}
/* Output *//*
5
5
HelloWorld
HelloWorldIMIC
true
Hello
HelloWorldMrIMIC
Found at Position:5
HelloTechnologyMrIMIC
*/
