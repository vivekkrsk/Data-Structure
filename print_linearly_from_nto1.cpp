#include <bits/stdc++.h>
using namespace std;

void printnumber(int n)
{
    if(n==0) return;
    cout << n<<endl;
    n--;
    printnumber(n);
}

int main()
{
    int n;
    cout << "Enter number from which we have to print ";
    cin>>n;
    printnumber(n);

    return 0;
}