#include <iostream>
using namespace std;

int main(){

  int i, n;

  cin >> n;

  if(n == 1){
    cout << 1 << endl;
  }

  if(n == 2){
    cout << 2 << endl;
  }

  int dcount = 2;
  int prime = 1;
  int counter = 2;

  i = 3;

  while(1){

    if(i % dcount == 0){
      prime = 0;
    }

    dcount++;
    if(dcount == i-1){
      dcount = 2;
      if(prime == 1){
        counter++;
      } else {
        prime = 1;
      }
    }

    if(counter == n){
      break;
    }
    i++;

  }

  cout << i;

  return 0;

}
