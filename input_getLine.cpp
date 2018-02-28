//using string module, getline function to retrive users
//input. This retrieves whole line, instead till spaces (cin)
#include <iostream>
#include <string>
using namespace std;

int main(){
  string name;
  int age;
  cout << "Please enter your name: ";
  getline(cin, name);
  cout << "Please enter your age";
  cin >> age;
  cout << "Your name is : " << name << endl;
  cout << "Your age is : "<< age << endl;
  return 0;
}
