#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    
    //it++ ===> moves iterator to next iterator
    //it+1 ===> moves iterator to next location

    vector<int>::iterator it; //this is sytax used to declare iterator
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }


    //in case of vector of pairs (*it).first <=> (it->first)
    return 0;
}