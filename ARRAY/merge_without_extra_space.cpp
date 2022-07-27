#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
int arr1[] = {1, 3, 5, 7};
int arr2[] = {0, 2, 6, 8, 9};
void merge(int arr1[], int n1, int arr2[], int n2)
{
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + n2);
        }
    }
}
int main()
{
    int N = 4, M = 5;

    merge(arr1, N, arr2, M);
    for (int i = 0; i < N; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < M; j++)
    {
        cout << arr2[j] << " ";
    }
    return 0;
}