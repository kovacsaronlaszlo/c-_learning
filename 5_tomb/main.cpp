#include <iostream>

using namespace std;

int main() {

  int a[5]; /* ez egy 5 elemű egész számokat elfogadó tömb */
  cout << "addj meg egy számot a vekotr 3ik helyére: "<<endl;
  cin>>a[3];
  cout<<"a vector 3ik eleme: " << a[3] << " all!" << endl;

  /*
    a többi helyet ha kiíratjuk, akkor memóriaszemetet kapunk! 
    mivel nem adtunk meg nekik semmilyen értéket
  */

 a[0]=a[3]+3;
 cout << "a vektor 0ik eleme: " << a[0] << endl;

  return 0;
}