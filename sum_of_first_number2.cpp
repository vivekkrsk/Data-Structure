// fucntional way
#include <bits/stdc++.h>
using namespace std;

int printsum(int n)
{
    if(n==0) return 0;
    return n+printsum(n-1);
}
int main()
{
    int n;
    cout<<"Enter n ";
    cin>> n;
    cout << printsum(n);

    return 0;
}