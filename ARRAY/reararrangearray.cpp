#include<iostream>//harshit
using namespace std;
void rearrange(int arr[], int n)
{
    int max_in = n - 1, min_in = 0;
    int max_element = arr[n - 1] + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += arr[max_in] % max_element * max_element;

            max_in--;
        }
        else
        {
            arr[i] += arr[min_in] % max_element * max_element;

            min_in++;
        }
    }
for(int j=0;j<n;j++)
{
    cout<<arr[j]/max_element<<"  ";
}
}

int main()
{


int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
rearrange(arr, n);

    return 0;
}