/* Example: Using Virtual Function to Solve the Problem */
#include <iostream>
using namespace std;

class Weapon {
   public:
   virtual void features() { cout << "Loading weapon features.\n"; }
};

class Bomb : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading bomb features.\n";
   }
};

class Gun : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "Loading gun features.\n";
   }
};

class Loader {
   public:  
   void loadFeatures(Weapon *weapon) {
      weapon->features();
   }
};

int main() {
	
   Loader *l = new Loader;
   Weapon *w;   
   
   Bomb b;
   Gun g;

   w = new Bomb();
   l->loadFeatures(w);

   w = &g;
   l->loadFeatures(w);

   return 0;
}

/* Output *//*
Loading weapon features.
Loading bomb features.
Loading weapon features. 
Loading gun features.
*/
