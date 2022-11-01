// Programmer: John Thompson
// Description: HW10 Greedily Increasing Sub.
// Date: 10/ 31/ 2022

#include <iostream>

using namespace std;

int main() {
    
bool sync_with_stdio( bool sync = true );
  

  cin.tie(0);
  
  int n; 
  int max = -1; 
  int count = 0;
  string s = "";
  
  cin >> n;
  
  for (;n-- > 0;) {
    int a;
    
    cin >> a;
    
    if (a > max) {
      max = a;
      s += to_string(a) + " ";
      count++;
        }
  }
  
  cout << count << '\n' << s;
  
  return 0;
}