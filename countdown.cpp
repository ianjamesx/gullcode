#include <iostream>
using namespace std;

int getMonthDay(int m, int y);

int main(){

  int month = 10, day = 16, year = 2019;
  int currday = 365 - (31 + (30-16));

  int usermonth, userday, useryear;

  //cout << currday << endl;

  cin >> useryear >> usermonth >> userday;

  int daytotal = 0;

  int extradays = 0;
  int flag = 0;
  int i;
  for(i = year; i <= useryear; i++){

    if(i == useryear){
      if(usermonth <= 2 && userday != 29){
        break;
      }
    }

    if(i % 4 == 0){
      extradays++;
      if(flag == 0){
        daytotal--;
        flag = 1;
      }
    }
  }

  for(i = 1; i < usermonth; i++){
    daytotal += getMonthDay(i, useryear);
  }

  daytotal += userday;

  daytotal += (((useryear - year) * 365) - currday) + extradays;

  cout << daytotal << endl;

  return 0;
}


int getMonthDay(int m, int y){

  switch(m){
    case 1:
      return 31;
    break;
    case 2:
      if(y % 4 == 0){
        return 29;
      }
      return 28;
    break;
    case 3:
      return 31;
    case 4:
      return 30;
    break;
    case 5:
      return 31;
    break;
    case 6:
      return 30;
    break;
    case 7:
      return 31;
    break;
    case 8:
      return 31;
    break;
    case 9:
      return 30;
    break;
    case 10:
      return 31;
    break;
    case 11:
      return 30;
    break;
    case 12:
      return 31;
    break;
  }

  return 0;
}
