#include <iostream>
using namespace std;
class Cube {
   public:
      static int objectCount;
      Cube()
        {
         objectCount++;
      	}
      	static int getCount() 
        {
         return objectCount; 
        }
};
int Cube::objectCount = 0;
int main() {
   Cube c1;
   cout << "Total objects: " << Cube::getCount() << endl;
 	Cube c2;
   cout << "Total objects: " << Cube::getCount() << endl;
   return 0;
}