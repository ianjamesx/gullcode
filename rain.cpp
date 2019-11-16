#include <iostream>
#include <vector>
#include <string>
using namespace std;

class space {
public:
  int lwall;
  int rwall;
  int value;
};

int main(){

  int bsize = 999999;

  char arr[bsize];
  int arrsize = 0;

  string s;

  getline(cin, s);

  int max = static_cast<int>('9');

  int nsize = (s.length()/2)+1;

  int n[nsize];


  int i, j;
  int index = 0;
  for(i = 0; i < s.length(); i++){
    if(static_cast<int>(' ') == s[i]){
      continue;
    }

    int curr = static_cast<int>(s[i]);
    int currval =  (9 - (max - curr));
    n[index] = currval;
    index++;

  }

  int largest = n[0];
  for(i = 0; i < nsize; i++){
    if(n[i] > largest){
      largest = n[i];
    }
  }

  space graph[largest][nsize];

  for(i = 0; i < largest; i++){
    for(j = 0; j < nsize; j++){
      graph[i][j].value = 0;
      graph[i][j].lwall = -1;
      graph[i][j].rwall = -1;
    }
  }

  int rowpos = largest-1;
  int arrpos = 0;
  int wallcounter = 0;

  for(j = 0; j < nsize; j++){
    wallcounter = n[j];
    //cout << "iter " << j << " - " <<  n[j] << endl;
    for(i = 0; i < wallcounter; i++){
      graph[rowpos-i][j].value = 1;
    }
    wallcounter = 0;
    arrpos++;
  }

  int wallj = -2;
  for(i = 0; i < largest; i++){
    for(j = 0; j < nsize; j++){
      if(graph[i][j].value == 1){
        wallj = j;
      }
      if(wallj != -2){
        graph[i][j].lwall = 2;
      }
    }
    wallj = -2;
  }

  wallj = -2;
  for(i = 0; i < largest; i++){
    for(j = nsize-1; j >= 0; j--){
      if(graph[i][j].value == 1){
        wallj = j;
      }
      if(wallj != -2){
        graph[i][j].rwall = 2;
      }
    }
    wallj = -2;
  }

  for(i = 0; i < largest; i++){
    for(j = 0; j < nsize; j++){
      //cout << graph[i][j].value;
      if(graph[i][j].rwall == 2){
        //cout << i << " - " << j << endl;
      }
    }
    //cout << endl;
  }

  int counter = 0;
  for(i = 0; i < largest; i++){
    for(j = 0; j < nsize; j++){
      if(graph[i][j].value == 0 && graph[i][j].lwall == 2 && graph[i][j].rwall == 2){
        counter++;
      }
    }
  }

  cout << counter << endl;


  //0 1 0 2 1 0 1 3 2 1 2 1

  return 0;
}
