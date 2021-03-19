#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int element;
    vector<int> vec1;

    for (int i=0;i<5;i++)
    {

        cout<<"Enter an element to enter:  ";
        cin>>element;
        vec1.push_back(element);
    }
    int maxx = *max_element(vec1.begin(),vec1.end());
    cout<<"The maximum element of the array is: "<<maxx<<endl;


    return 0;


}
