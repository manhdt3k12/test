#include<iostream>
using namespace std;
class Weapon {
	public:
		Weapon(){
			cout<<"Loading weapon features."<<endl;
		}
};
class Bomb:Weapon{
	public:
		Bomb(){
			cout<<"Loading bomb features."<<endl;
		}
};
class Gun: public Weapon{
	public:
		Gun(){
			cout<<"Loading gun features."<<endl;
		}
};
class Loader{
	public:
		void loadFeature(){
			cout<<"Loading weapon features."<<endl;
		}
	
};
int main(){

	Bomb *w= new Bomb;
	Gun t;
	
}
