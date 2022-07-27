#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
int arr[] = {1, 2, 3, -4, -1, 4};
int n = sizeof(arr)/sizeof(arr[0]);
void alter(int arr[], int n)
{
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[neg]);
            neg = neg + 2;
        }
        else
        {
            swap(arr[i], arr[pos]);
            pos += 2;
        }
    }
}
int main()
{

    alter(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}