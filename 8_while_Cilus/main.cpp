#include <iostream>

using namespace std;

int main() {

  /* feltöltünk egy tömböt */
  int a[4], i=0, j=0;
  while(i<4) {
    cin>>a[i];
    i++;
  }

  cout<<"==============="<<endl;

  /* tömb kiolvasása */
  while(j<4) {
    cout<<a[j]<<endl;
    j++;
  }

  return 0;
}