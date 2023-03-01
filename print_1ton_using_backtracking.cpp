#include <bits/stdc++.h>
using namespace std;

void printnumber(int i,int n)
{
    if(i<1)return;
    printnumber(i-1,n);
    cout << i <<endl;
}

int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    printnumber(n,n);

    return 0;
}