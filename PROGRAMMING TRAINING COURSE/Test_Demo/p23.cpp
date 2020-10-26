#include<iostream>
using namespace std;
//template <class T> & template<class T>

template<class T>
class myIncrement<char>{
	T a;
	public:
		T toIncrement(){
			if(a>=97&&a<=122)
				
			
		}
};

int main(){
	myIncrement<int> myint(7);
	myIncrement<char> mychar('a');
	myIncrement<double> mydouble(11.0);
	cout<<"Incremented int value: "<< ...toIncrement()<< endl;
  cout<<"Incremented char value: "<<...toIncrement()<< endl;
  cout<<"Incremented double value: "<<...toIncrement()<< endl;  
  return 0;
}
