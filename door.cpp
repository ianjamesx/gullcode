#include <iostream>
using namespace std;

int main(){

  int arr[101];
  int n, i, j;

  for(i = 0; i < 101; i++){
    arr[i] = 0;
  }

  for(i = 2; i <= 100; i++){
/*
    if(arr[0] == 0){
      arr[0] = 1;
    } else {
      arr[0] = 0;
    }
*/
    for(j = 0; j <= 100; j += i){

      if((j + i) > 100){
        break;
      }

      if(arr[j+i] == 1){
        arr[j+i] = 0;
      } else {
        arr[j+i] = 1;
      }
    }
  }

  cin >> n;

  if(n == 0){

    for(i = 0; i < 101; i++){
      cout << (i+1) << " " << arr[i] << endl;
    }

  } else if(n == 1){
    for(i = 0; i < 101; i++){
      if(arr[i] == 1){
        cout << (i+1) << " " << arr[i] << endl;
      }
    }
  } else if(n == 2){
    for(i = 0; i < 101; i++){
      if(arr[i] == 0){
        cout << (i+1) << " " << arr[i] << endl;
      }
    }
  }

  return 0;
}
