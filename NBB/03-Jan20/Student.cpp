#include <iostream>
#include "Student.h"
using namespace std;
namespace sdds {
   const double IntrestRate = 0.02;
   void Student::display() {
      cout << name << " ," << stNo <<
         ", osap loan: " << balance << " interst: " <<
         balance*IntrestRate <<  endl;
   }
}