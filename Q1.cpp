//for string reverse
#include <algorithm>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
  string str = "Hello Myself Nikita";  
  cout << "Before Reverse : "<< str << endl;  
  
  reverse(str.begin(), str.end());  
  cout <<"After Reverse  : " << str << endl;  
    
  return 0;  
}  


//Alternate methods  :   https://www.javatpoint.com/cpp-algorithm-reverse-function





