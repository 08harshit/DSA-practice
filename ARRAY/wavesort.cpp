#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void wavesort(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i+=2)
    {
        swap(&arr[i ],&arr[i+1]);
    }
}
int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    wavesort(arr, n);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
