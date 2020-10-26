#include<iostream>
using namespace std;
class Shape{
	virtual double Area(){
	};
};
class Rectangle:public Shape{
	double width;
	double height;
	public:
		void setWidth(double wid){
			width=wid;
		}
		void setHeight(double heig){
			height=heig;
		}
		double Area(){
			return (double)width*height;
		}

};
class Triangle:public Shape{
	double width;
	double height;
	public:
		void setWidth(double wid){
			width=wid;
		}
		void setHeight(double heig){
			height=heig;
		}
		double Area(){
			return (double)width*height/2;
		}

};
int main(){
	Rectangle Rect;
	Triangle Tri;
	Rect.setWidth(5);
	Rect.setHeight(7);
	cout<<"Total Rectangle area: "<<Rect.Area()<<endl;
	Tri.setWidth(5);
	Tri.setHeight(7);
	cout<<"Total Triangle area: "<<Tri.Area()<<endl;
	return 0;
}
