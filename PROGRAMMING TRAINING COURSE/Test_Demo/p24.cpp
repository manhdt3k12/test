#include<iostream>
using namespace std;
template<class T>
T sumation(T a){
	return a;
}

template<class T...Args...args>
T summation(T a, args...)
{
  return ....; 
}
int main()
{
  long sum = summation(1, 2, 3, 8, 7);
  cout<<"Sum of long numbers = "<<....<<endl;

  string s1 = "H", s2 = "e", s3 = "ll", s4 = "o";
  ....

  int a = 5,b = 10,c = 15,d = 20,e = 25;
  ...
}
/* Output */
Sum of long numbers = 21
Sum of strings = Hello
Sum of int = 75
