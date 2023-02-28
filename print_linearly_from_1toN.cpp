#include <bits/stdc++.h>
using namespace std;
void printnumber(int a, int n)
{
    if(a==(n+1)) return;
    cout << a;
    a++;
    printnumber(a,n);
}
int main()
{
    int a=1;
    int n;
    cout << " Enter Number upto which we have to print ";
    cin >> n;
    printnumber(a,n);
    return 0;
}