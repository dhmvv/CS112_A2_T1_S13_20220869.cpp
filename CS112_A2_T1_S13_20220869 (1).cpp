//program data types program  

#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  string name = "abdo";
  bool status = true;

  int num_one = 100;
  int num_two = 50;
  int num_three = 20;

  cout << sizeof(num) << endl;
  cout << sizeof(name) << endl;
  cout << sizeof(status) << endl;

  /* // 100 / 50 / 20 = ____ */
  cout << num_one / num_two /num_three;
  // cout << num_one / name; // Error

  return 0;
}