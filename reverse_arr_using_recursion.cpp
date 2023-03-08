#include <bits/stdc++.h>
using namespace std;

void reversearr(int l,int r, int* arr)
{
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reversearr(l+1,r-1,arr);
}

int main()
{
    int arr[5];
    int r= sizeof(arr)/sizeof(int);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter "<<i<<" position element ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "Entered array" ;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
        
    }
    cout << endl;

    reversearr(0,r-1,arr);
    cout << "Output array " ;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
        
    }
    cout << endl;
    

    return 0;
}