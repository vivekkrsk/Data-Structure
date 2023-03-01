// prametrized way
#include <bits/stdc++.h>
using namespace std;

void printsum(int i,int sum)
{
    
    if(i<1) 
    {
        cout << sum << endl;
        return;
    }
    
    printsum(i-1,sum+i);
   

}

int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    printsum(n,0);

    return 0;
}