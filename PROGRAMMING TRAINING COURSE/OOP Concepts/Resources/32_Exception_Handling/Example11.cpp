#include <stdexcept>
#include <limits>
#include <iostream>
using namespace std;

void MyFunc(int c)
{
    //-> numeric_limits<char> ::max() : 127
    if (c > numeric_limits<char> ::max())
        throw invalid_argument("MyFunc argument too large.");   
}

int main()
{
    try
    {
        MyFunc(127); //cause an exception to throw
        cout<<":D";
    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }    
    return 0;
}