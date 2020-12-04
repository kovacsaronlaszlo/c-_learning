#include <iostream>

using namespace std;

int main() {

  /* hogyan lehet tombe elemeket pakolni */
  int a[7], i, sum=0;
  /* egy héten keresztűl mértük a levegő hőmérsékletét */
  for(i=0; i<7; i++) {
    cout<<"add meg a napi hőmérsékletet: "<<endl;
    cin>>a[i];
  }

  for(i=0; i<7; i++) {
    sum+=a[i];
  }
  cout<<"A hőmérséklet összege: "<<sum<<endl;

  return 0;
}