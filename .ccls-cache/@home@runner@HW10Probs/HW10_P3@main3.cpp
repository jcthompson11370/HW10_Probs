// Programmer: John Thompson
// Description: HW10 Greedily Increasing Sub.
// Date: 10/ 31/ 2022

#include <iostream>
#include <array>

using namespace std;

void sortArray(int myArray[], int ARRAY_SIZE);
void printArray(const int myArray[], int ARRAY_SIZE);

int main() {
  int newMax, newArraySize, index;
  int N;
  cout << "Enter size of N: ";
  cin >> N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];
  int myNewArray[] = {0};

  cout << "Enter " << N << " integers: ";
  for(index = 0; index < ARRAY_SIZE; index++){
  
    cin >> myArray[index];
    }
  
  
  int count = 0;
  cout << "The new array size is: " <<  count + 1 << endl;
  for(index = 0; index < N; index++){
    if(index == 0){
      newMax = myArray[0];
      cout << newMax << " ";
    }
    else if(newMax < myArray[index] && index > 0){
    newMax = myArray[index]; 
    cout << newMax << " ";
      count++;
      } 
    }
  
   return 0;
  }



    
 
  
    
