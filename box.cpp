#include <iostream>
using namespace std;

int main(){

  int n, m;
  cin >> n >> m;

  int i, c = 0;

  if(n == 0){
    cout << m << endl;
    return 0;
  }

  if(m == 0){
    cout << n << endl;
    return 0;
  }


  if(n >= 0 && m >= 0){

    if(n > m){
      while(1){
        m--;
        n++;
        if(m == 0){
          cout << n << endl;
          return 0;
        }
      }
    }

    if(n < m){
      while(1){
        m++;
        n--;
        if(n == 0){
          cout << m << endl;
          return 0;
        }
      }
    }

  }

  if(n < 0 && m < 0){

    if(n > m){
      while(1){
        m--;
        n++;
        if(n == 0){
          cout << m << endl;
          return 0;
        }
      }
    }

    if(n <= m){
      while(1){
        m--;
        n++;
        if(n == 0){
          cout << m << endl;
          return 0;
        }
      }
    }
  }

  if(n < 0 && m >= 0){
    while(1){
      m--;
      n++;
      if(n == 0){
        cout << m << endl;
        return 0;
      }
    }
  }

  if(n >= 0 && m < 0){
    while(1){
      m++;
      n--;
      if(m == 0){
        cout << n << endl;
        return 0;
      }
    }
  }

  return 0;
}
