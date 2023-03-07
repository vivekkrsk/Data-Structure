// parametrized way
#include <bits/stdc++.h>
using namespace std;

void factorial(int n, int fact)
{
    if(n<1)
    {
        cout << fact;
        return;
    }
    factorial(n-1,fact*n);
}

int main()
{
    int n;
    cout << "Enter n ";
    cin>> n;
    factorial(n,1);


    return 0;
}