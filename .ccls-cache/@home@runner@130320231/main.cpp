#include <iostream>
using namespace std;

bool isLeap(int year);

int main(void) {
for(int yr = 1995; yr < 2023; yr++)
cout << yr << " -> " << isLeap(yr) << endl;
return 0;
}

bool isLeap(int year) {
 if(year % 4 == 0){
   return true;
 }
  else return false;
}
