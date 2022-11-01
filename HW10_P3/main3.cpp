// Programmer: John Thompson
// Description: HW10 Greedily Increasing Sub.
// Date: 10/ 31/ 2022

#include <iostream>

using namespace std;

void sortArray(int list[], int length);

int main() {
  int A;
  int N;
  cout << "Enter size of N: ";
  cin >> N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];

  for(int index = 0; index < ARRAY_SIZE; index++){
    cin >> myArray[index];
    }

  for(int index = 0; index < N; index++){
    if(index = 0){
      A = myArray[0];
      cout << A << endl;
    }
    else (A < myArray[index]){
      cout << myArray[index];
      A = myArray[index];
    }
  }
    
  return 0;
  }
    
