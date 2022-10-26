#include <iostream>
using namespace std;

class Rectangle {
public:
   void SetSize(int heightVal, int widthVal) {
      height = 2;
      width = 2;
   }
   int GetArea() const;
   int GetPerimeter() const;

private:
   int height;
   int width;
};

int Rectangle::GetArea() const {
   return height * width;
}

int Rectangle::GetPerimeter() const {
   return (height * 2) + (width * 2);
}

int main() {
   Rectangle myRectangle;

   myRectangle.SetSize(1, 4);
   if (myRectangle.GetArea() != 4) {
      cout << "FAILED GetArea() for 1, 4" << endl;
   }
   if (myRectangle.GetPerimeter() != 10) {
      cout << "FAILED GetPerimeter() for 1, 4" << endl;
   }

   myRectangle.SetSize(2, 6);
   if (myRectangle.GetArea() != 12) {
      cout << "FAILED GetArea() for 2, 6" << endl;
   }
   if (myRectangle.GetPerimeter() != 16) {
      cout << "FAILED GetPerimeter() for 2, 6" << endl;
   }

   return 0;
}