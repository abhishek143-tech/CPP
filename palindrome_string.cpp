#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &str){
    //this method takes generally constant time but in worst case it may takes theta(n) time or O(n)
    int begin =0;
    int end = str.length()-1;
    while (begin<end)
    {
        if(str[begin]!=str[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
    
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     string str = "abba";
     bool ans = checkPalindrome(str);
     cout<<ans<<endl;
    //  string rev = str;
    //  reverse(rev.begin(),rev.end());
    //  cout<<(str==rev)<<endl;
    // above method takes theta(n) time 
     return 0;
}