#include <iostream>
using namespace std;

int main(){

  int n1, n2;
  int i, j;

  cin >> n1 >> n2;

  int temp1 = n1, temp2 = n2;

  int arr1[4];
  int arr2[4];

  int b[4];
  int c[4];
  for(i = 0; i < 4; i++){
    b[i] = -1;
    c[i] = -1;
  }

  for(i = 3; i >= 0; i--){
    arr1[i] = temp1 % 10;
    temp1 /= 10;
  }

  for(i = 3; i >= 0; i--){
    arr2[i] = temp2 % 10;
    temp2 /= 10;
  }

  int bulls = 0, cows = 0;

  int bcount = 0, ccount = 0;

  for(i = 0; i < 4; i++){
    if(arr1[i] == arr2[i]){
      bulls++;
      b[bcount] = arr1[i];
      bcount++;
    }
  }

  for(i = 0; i < 4; i++){

    for(j = 0; j < 4; j++){

      if(arr1[i] == arr2[j]){
        if(i != j){
          cows++;
          c[ccount] = arr1[i];
          ccount++;
        }
      }

    }

  }

  cout << bulls << " bull and " << cows << " cows. ";
  cout << "(The bull(s): ";
  for(i = 0; i < 4; i++){
    if(b[i] != -1){
        cout << b[i] << " ";
    }
  }

  cout << "(The cow(s): ";
  for(i = 0; i < 4; i++){
    if(c[i] != -1){
        cout << c[i] << " ";
    }
  }

  cout << ") \n";

  return 0;
}
