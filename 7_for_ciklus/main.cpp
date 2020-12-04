#include <iostream>

using namespace std;

int main() {

  /* feltöltünk egy tömböt */
  int a[5], i;
  for(i=0; i<5; i++) {
    cin>>a[i];
  }

  cout << "================="<<endl;

  /* tömb kiolvasása */
  for(i=0; i<5; i++) {
    cout<<a[i]<<endl;
  }

  return 0;
}