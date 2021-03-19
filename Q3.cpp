#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void sorting (vector<int> v1)
{
    sort(v1.begin(),v1.end());
}

int main()
{
    int element;
    int k;

    vector<int> vec1;

    for (int i=0;i<5;i++)
    {

        cout<<"Enter an element to enter:  ";
        cin>>element;
        vec1.push_back(element);
    }

    sorting(vec1);

    cout<<"Enter the value of K : ";
    cin>>k;

    if(k<vec1.size())
    {
       cout<<vec1[(vec1.size()-1) - k + 1];

    } else{

        cout<<"Invalid Entry (K)"<<endl;

    }
    return 0;


}
