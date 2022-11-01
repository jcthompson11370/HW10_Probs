// Programmer: John Thompson
// Description: HW10 Greedily Increasing Sub.
// Date: 10/ 31/ 2022

#include <iostream>

using namespace std;

void sortArray(int myArray[], int ARRAY_SIZE);

int main() {
  int A;
  int index = 0;
  int N;
  cout << "Enter size of N: ";
  cin >> N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];

  cout << "Enter " << N << " integers: ";
  for(int index = 0; index < ARRAY_SIZE; index++){
  
    cin >> myArray[A];
    }

  for(int index = 0; index < N; index++){
    if(index == 0){
      A = myArray[0];
      cout << A << endl;
    }
    else if(A < myArray[index])
      sortArray( myArray[], ARRAY_SIZE);
    }
   return 0;
  }
void sortArray(int myArray[], int ARRAY_SIZE){
  int index, smallestIndex, location, temp;

  for(int index = 0; index < ARRAY_SIZE -1; index++){
    
   smallestIndex = index;
    
    for(int location = index +1 ; location < ARRAY_SIZE; location++){
     
      if(myArray[location] < myArray[smallestIndex])
     
        smallestIndex = location; // location of smallest index
   } 

    // make swap
    temp = myArray[smallestIndex];
    myArray[smallestIndex] = myArray[index];
    myArray[index] = temp;
    
  }
}
    
 
  
    
