#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
 
}

int main() {
  int firstNum = 10;
  int secondNum = 20;
//it will print numbers before swap
  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);
//now it will print numbers after swap
  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
