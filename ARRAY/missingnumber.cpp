#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = 0; i < n; i++)
    {
        if (i+1 != arr[i])
        {
            cout<<"missing number is:"<<i+1;
            break;
        }
    }       

    return 0;
}        