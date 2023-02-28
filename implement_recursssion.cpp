#include <bits/stdc++.h>
using namespace std;


void recursionfun(int cnt)
{
    if(cnt == 3) return;
    cout << cnt<<endl;
    cnt++;
    recursionfun(cnt);
}

int main()
{
    int count =0;
    recursionfun(count);

    return 0;
}