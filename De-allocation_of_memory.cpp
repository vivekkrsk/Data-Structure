// Deallocating meomory pointed by pointer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);

    ptr = NULL;

    int data;
    int *ptr2 = new int(data);
    free(ptr2);

    ptr = NULL;

    return 0;
}