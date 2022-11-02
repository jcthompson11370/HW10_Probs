// Programmer: John Thompson
// Description: HW10 Hangman Kattis Problem
// Date: 10/ 31/ 2022
// Note: Jake Thompson, Eric Pollert, Edwin Kurjak, and I worked on this problem together


#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

int findNumOfUniqueCharInStr(string myString);

int main(){
  string guess;
  string npos;
  string word;
  
  cin >> word;

  cin >> guess;

  int L = findNumOfUniqueCharInStr(word);

  int bodyPart = 0;

  for (int i = 0; i < 26; i++){
    if(word.find(guess[i]) != string::npos) {
      L--;
    }
    else{
      bodyPart++;
    }
    if(bodyPart == 10){
      cout << "LOSE";
      break;
    }
    if(L == 0){
      cout << "WIN";
      break;
    }
  }
  return 0;  
}

int findNumOfUniqueCharInStr(string myString) {

  const int L = myString.length();
  char unique[L]; // set all to NULL
  int n, k;

  // setup unique to store the first value of the string and then

  // all NULLs

  unique[0] = myString[0];
  // initialize all other spots in unique to be NULL aka '\0'
  for (n = 1; n < L; n++) {
    unique[n] = '\0';
  }
  int j = 1;

  bool FLAG;
  // fill unique

  for (n = 1; n < L; n++) {
    FLAG = false; // meaning it does not exist
    
    for (k = 0; k < L; k++) {
      if (myString[n] == unique[k]) // then found it does exist
        FLAG = true;

    }
    // if it didn't exist we will add it in to unique
    if (FLAG == false) {
      unique[j] = myString[n];
      j++;
    }
  }
  return j;
  }