#include <iostream>
using namespace std;

int main(){

  int i = 3, n, counter = 2, prime = 0, primenum = 2;

  cin >> n;

  if(n == 1){
    cout << 1 << endl;
  }

  if(n == 2){
    cout << 2 << endl;
  }

  while(n >= 3){

    int j;
    prime = 0;
    for(j = 2; j <= (i/2); j++){
      if(i % j == 0){
        prime = 0;
        break;

      } else if(j == (i/2)){
        prime = 1;
        break;
      }
    }

    if(prime == 1){
      counter++;
      primenum = i;
    }

    if(counter == n){
      break;
    }

    i += 2;

  }

  cout << primenum << endl;

  return 0;
}
