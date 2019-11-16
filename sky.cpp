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

  int counter = 2;

  for(i = 3; i < n; i++){

    if(n % i == 0){
      continue;
    } else {
      counter++;
      if(counter == n){
        cout << i << endl;
        break;
      }
    }

  }

  return 0;
}
