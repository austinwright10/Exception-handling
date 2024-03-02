#include <string>
#include <iostream>

using namespace std;

int main() {
   string inputName;
   int age;
    bool ageInputSuccessful;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
       try {
           cin >> age;
           ageInputSuccessful = true;
       }
       catch(const ios_base::failure& excpt) {
           cin.clear();
           string garbage;
           getline(cin, garbage);
           ageInputSuccessful = false;
       }
       if (ageInputSuccessful) {
           cout << inputName << " " << (age + 1) << endl;
       } else {
           cout << inputName << " " << 0 << endl;
       }
       
       cin >> inputName;
   }
   
   return 0;
}
