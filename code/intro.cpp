// intro.cpp : prints a line of text to the console

#include <iostream> // directive, add iostream to be interpreted by the pre-processor
//using namespace std; // directive, make available all elements of the standard namespace to the global scope


/* function definition
  every c++ program must have exactly one main in order to be linked to an executable binary
  int is the return type for this function (optional, with default returing a zero indicating successful completion of program)
*/
int main() { 
  // cout -> character output from Standard Library, << stream insertion operator
  std::cout << "Hello World!" << '\n'  + 7;
  std::cout << "$USD \u20ACEURO \u20ACPD  \u03C0"
             << '\n';
}