#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(int l, int r, string s)
{
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return checkpalindrome(l+1,r-1,s);
}

int main()
{
    string s;
    cout << "Enter string ";
    cin >> s;

    int r = s.size();
     
    cout << checkpalindrome(0,r-1,s);

    return 0;
}