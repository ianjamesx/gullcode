#include <iostream>
using namespace std;

int checkValid(int coord);

int main(){

  int userX, userY;

  int valid = 0;

  while(!valid){

    cin >> userX >> userY;

    if(userX < 1 || userX > 8 || userY < 1 || userY > 8){

      cout << "not valid\n";

    } else {

      valid = 1;

    }

  }

  int counter = 0;

  if(checkValid(userY+2) && checkValid(userX+1)){
    counter++;
  }

  if(checkValid(userY+2) && checkValid(userX-1)){
    counter++;
  }

  if(checkValid(userY-2) && checkValid(userX+1)){
    counter++;
  }

  if(checkValid(userY-2) && checkValid(userX-1)){
    counter++;
  }


  //other four
  if(checkValid(userX+2) && checkValid(userY+1)){
    counter++;
  }

  if(checkValid(userX+2) && checkValid(userY-1)){
    counter++;
  }

  if(checkValid(userX-2) && checkValid(userY+1)){
    counter++;
  }

  if(checkValid(userX-2) && checkValid(userY-1)){
    counter++;
  }

  cout << "steps: " << counter << endl;

  return 0;
}

int checkValid(int coord){

  if(coord < 1 || coord > 8){
    return 0;
  }

  return 1;

}
