/* Example: Operator overloading in C++ Programming */
#include <iostream>
using namespace std;

class Test
{
   private:
      int count;
   public:
       Test(): count(5){}
       void operator ++() { 
          count = count + 100; 
       }
       void Display() { cout<<"Count: "<<count; }
};

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    t++;    
    t.Display();
    return 0;
}
/* Output */
// Count: 6
