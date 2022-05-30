#include <iostream>
 
using namespace std;

class circle {
   public:
      // Constructor definition
      circle (double r = 2.0) {
         cout <<"Constructor called." << endl;
         radius = r;

      }
      double area() {
         return 3.14*radius*radius;
      }
      int compare(circle circle) {
         return this->area() > circle.area();
      }
      
   private:
      double radius;     // radius of circle
};

int main(void) {
   circle circle1(3.3);    // radius of circle1
   circle circle2(8.5);    // radius of circle2

   if(circle1.compare(circle2)) {
      cout << "circle2 is smaller than circle1" <<endl;
   } else {
      cout << "circle2 is equal to or larger than circle1" <<endl;
   }
   
   return 0;
}

