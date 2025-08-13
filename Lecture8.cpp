/*
Function :- A function is a block of code which only runs when it is called.

why it is important??
-Reusability
-DRY principle
-Easy to use

Types of functions
     |
     |--USER defined
     |
     |--Standard library 

How to declare functions:-

   return_type Function_name(parameters..){
        statements;
   }


#include<iostream>
using namespace std;
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();
  return 0;
}
*/

// Function overloading allows multiple functions to have the same name, as long as their parameters are different in type or number:

#include<iostream>
using namespace std;
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}