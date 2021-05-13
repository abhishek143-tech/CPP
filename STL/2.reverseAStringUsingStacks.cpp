#include <bits/stdc++.h>
using namespace std;
void reverseString(string s){
    stack<string> s1;
    for (int i = 0; i < s.length(); i++)
    {
        string temp = "";
        while (s[i]!=' ' && i<s.length())
        {
            temp+= s[i];
            i++;
        }
        s1.push(temp);
        
    }

    while (!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
    
}
int main(){
    string s = "My name is abhishek dhok";
    reverseString(s);
    return 0;
}