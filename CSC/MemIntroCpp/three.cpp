#include <iostream>
using namespace std;
int main()
{
  
  int *ptr;
  
  cout << "Hello World!" << endl;   

  ptr = new int;
  
  *ptr = 3;
  
  cout << "Value is " << *ptr << endl;
  
  delete ptr;
  
  cout << "Done" << endl;

}
