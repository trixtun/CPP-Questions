#include <iostream>

using namespace std;

int main()
{
   int n[7] = {2,3,4,5,6,7,8};
   int N[7];
   for(int i=0;i<7;i++)
   {
       N[i] = n[6-i];
   }

   for(int j=0;j<7;j++)
   {
        cout<<N[j]<< " ";
   }

}




//Alternate methods  :   https://www.javatpoint.com/cpp-algorithm-reverse-function







//for string reverse



/*
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



*/



