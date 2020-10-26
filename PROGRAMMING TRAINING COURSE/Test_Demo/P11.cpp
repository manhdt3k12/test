#include<iostream>
using namespace std;
class Box{
	double width;
	
	public:
	void setWidth(double);
	friend void printfWidth(Box box);
};
void Box::setWidth(double wid){
		width= wid;	
	}
void printfWidth(Box box){
	cout<<"Width of box : "<<box.width<< endl;
}
int main(){
	Box a;
	a.setWidth(10);
	printfWidth(a);
	
	
	
	return 0;
}
