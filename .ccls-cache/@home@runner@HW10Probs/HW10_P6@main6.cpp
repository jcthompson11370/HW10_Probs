// Programmer: John Thompson
// Description: HW10 Problem 6
// Date: 11/ 01/ 2022
// Note: Jake Thompson and I worked together on this problem

#include <iostream>

using namespace std;

struct vehicle{
int miles;
int gallon;
int num;
};

int main(){

  const int listSize = 5;
  vehicle list[listSize];

  for (int i = 0; i < listSize; i++){

    cin >> list[i].num;
    cin >> list[i].miles;
    cin >> list[i].gallon;
    
  }
  double avgMPG = 0;
  for(int i = 0; i < listSize; i++){

    double mpg = list[i].miles / list[i].gallon;
    avgMPG += mpg;
    cout << "Vehicle number " << list[i].num << " used: " << mpg << " mpg" << endl;
  }
  
  cout << "Avg. mpg: " << avgMPG / listSize << endl;
  
  return 0;
}
