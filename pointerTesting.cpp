//Shows how pointers is used and what it does
#include <iostream>
using namespace std;
void p(int &a);
int main(){
  int a = 0; 
  int * pa = &a;
  cout << "Address of a : " << &a << endl;
  cout << "Value a holds : "<< a <<endl;
  cout << "Address of pa : " << &pa << endl;
  cout << "Value pa holds : " << pa << endl;
  cout << "Pointer pointing at : " <<  * pa << endl;
  p(a);
  cout<<"Value of a : " << a<<endl;
  return 0;
}
//passing by reference, changes variable value
void p(int &a){

  cout << "Value of parameter is : " << a<< endl;
  a++;

}
