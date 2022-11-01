// Programmer: John Thompson
// Description: HW10 Problem 5
// Date: 10/ 31/ 2022

#include <iostream>

using namespace std;

#include <iostream>

const int ROWS = 2;
const int COLS = 3;

void arr(int [] [COLS]);

int main(){  
  int nums[ROWS][COLS] = {{33,16,29},                             
                          {54,67,99}}; 
  
  arr(nums);  
  return 0;
  }

void arr(int (*val) [3])
{  
  cout << endl << * ( * val);  
  cout << endl << *(*val + 1);  
  cout << endl << *(*(val + 1) + 2);  
  cout << endl << *(*val) + 1; 
  cout << "\nThe notation: val[1][2] is valid.\nIt is equal to: " << val[1][2] << endl;
  
  return;
  }