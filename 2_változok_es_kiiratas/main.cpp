#include <iostream>

using namespace std;

int main() {
  /* egész számok */
  int c = 6;
  /* ugyan akkora a számok értéke, mint az int-ben  */
  long int d = 12;
  /* -32000 től 3200 ig tudunk neki értéket megadni */
  short int b = -32000 | 32000;
  /* nem tudunk megadni neki negatív értéket */
  unsigned short int a=32000;
  /* 0 és 4 milliárd között tudunk mozogni */
  unsigned int e = 20;

  /* tizedes számok */
  float f = 2.5566;

  /* karakterek tárolására */
  char g = 'a';
  /* betűket '' adjuk meg, csak karakterek esetén */

  /* logikai érték bool 0 vagy 1, vagy false, vagy true */
  bool h = 0 | 1 | false | true;

  /* bekérés */
  int szam;

  /* kiiratás parancsa a cout */
  cout << "Kiíratás 'cout' paraccsal.\n";
  cout << "Kiíratás 'cout' paranccsal és végén endl." << endl;
  cout << "Kiíratás 'cout' paranccsal és több " << endl << "endl paranccsal" << endl;

  /* bekérés a "cin" paranccsal */
  cin >> szam;
  cout << "A szám értéke: " << szam << endl;

}