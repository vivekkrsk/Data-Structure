#include <bits/stdc++.h>
using namespace std;

int fibonaccinum(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonaccinum(n-1) + fibonaccinum(n-2);
}

int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;

    cout << fibonaccinum(n);

    return 0;
}