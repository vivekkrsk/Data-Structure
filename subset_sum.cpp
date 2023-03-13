#include <bits/stdc++.h>
using namespace std;

void func(int ind, int sum, int arr[], int N, vector<int> &sumsubset)
{
    if(ind==N)
    {
        sumsubset.push_back(sum);
        return;
    }

    func(ind+1, sum+arr[ind], arr, N, sumsubset);

    func(ind+1,sum,arr,N,sumsubset);
}

int main()
{
    int arr[]={1,2,3};
    int N =3;
    vector<int> sumsubset;
    func(0,0,arr,N,sumsubset);
    sort(sumsubset.begin(),sumsubset.end());
    for(auto it : sumsubset)
        {
            cout << it<<" ";
        }

    return 0;
}