#include <iostream>
using namespace std;
int main()
{
  
  int *ptr;
  //free(ptr);
  
  cout << "Hello World!" << endl;   

  ptr = new int;

  *ptr = 2;
  
  cout << "Value is " << *ptr << endl;
  
  delete ptr;
  
  cout << "Done" << endl;

}
