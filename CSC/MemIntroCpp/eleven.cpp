#include <iostream>
using namespace std;
int main()
{

  int LENGTH = 16;
  
  int a[LENGTH];
  int b[LENGTH];
  
  cout << "Hello World!" << endl;   

  for (int i=0; i<LENGTH; i++) a[i] = 11;
  for (int i=0; i<LENGTH; i++) b[i] = 12;

  cout << "Value of a[LENGTH] is " << a[LENGTH - 1] << endl;
  cout << "Value of b[LENGTH] is " << b[LENGTH - 1] << endl;

  a[LENGTH - 1] = 110;
  b[LENGTH - 1] = 120;

  cout << "New value of a[LENGTH] is " << a[LENGTH - 1] << endl;
  cout << "New value of b[LENGTH] is " << b[LENGTH - 1] << endl;
   
  cout << "Done" << endl;

}
