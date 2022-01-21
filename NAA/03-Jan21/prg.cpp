#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
int main() {
   int i;
   double d;
   Student S = { "Fred", 123456, 1234.56 };
   Student T = { "John", 234567, 23465.67 };
   //displayStudent(&S);
   cout << "Printing student with interest rate of " << IntrestRate << endl;
   S.display();
   T.display();
   return 0;
}