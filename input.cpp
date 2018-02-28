#include "input.hpp"
//CIN limitation for retiving user input



int main(){
  string name = "";
  int age = 0;
  cout<<"Please enter your name"<<endl;
  cin>>name; 
  //issue 
  //cin does not retrieve strings that have a space in them. 
  //it will see the space as the end of the input.
  cout <<"Enter your age"<<endl;
  cin >> age;
  cout<<"Your name is " << name<< endl;
  cout<<"Your age is "<<age<<endl;
  return 0;
}
