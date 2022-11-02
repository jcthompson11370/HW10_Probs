// Programmer: John Thompson
// Description: HW10 Greedily Increasing Sub.
// Date: 10/ 31/ 2022
// Note: Jake Thompson, Eric Pollert, Edwin Kurjak, and I worked on this problem together

#include <iostream>
#include <array>

using namespace std;

void sortArray(int myArray[], int ARRAY_SIZE, int newMax);

int count = 0;

int main() {
  int newMax, newArraySize;
  int N;
  cout << "Enter size of N: ";
  cin >> N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];
  int myNewArray[] = {0};

  cout << "Enter " << N << " integers: ";
  for(int index = 0; index < ARRAY_SIZE; index++){
  
    cin >> myArray[index];
    }

  sortArray(myArray, ARRAY_SIZE, newMax);
  
   return 0;
  }

void sortArray(int myArray[], int ARRAY_SIZE, int newMax){
  
  for(int index = 0; index < ARRAY_SIZE; index++){  
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
  cout << "\nThe new array size is: " << count + 1 << endl; 
}



    
 
  
    
