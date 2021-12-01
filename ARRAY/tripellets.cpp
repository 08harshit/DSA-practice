#include <iostream> //HARSHIT SEN
using namespace std;
void triplet(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            if (arr[i] + arr[i + 1] == arr[j])
            {
                count++;
                
            }
        }
    }

    cout << count;
}

int main()
{
    int n = 4;
    int arr[] = {1, 2, 3, 5};
    triplet(arr, n);
    return 0;
}