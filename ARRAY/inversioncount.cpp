#include<iostream>                               //HARSHIT SEN
using namespace std;
void count_inversion(int A[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       { if(A[i]>A[j])
        {
            count++;
        }}
    }
cout<<count;
}

int main(){
    int arr[]={2, 4, 1, 3, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_inversion(arr,n);
    
    return 0;
}