#include <iostream>

using namespace std;

int main() {

  /* feltöltünk egy tömböt */
  int a[4], i=0, j;
  do {
    cin>>a[i];
    i++;
  } while(i<4);

  cout<< "=========="<<endl;

  /* tömb kiolvasása */
  for(j=0; j<4; j++) {
    cout<<a[j]<<endl;
  }

  /* pl. vektoroknál, ah nem kell előtesztelni az elemeket */
 

  return 0;
}