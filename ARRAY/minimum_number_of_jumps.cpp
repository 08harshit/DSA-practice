#include<iostream>                               //HARSHIT SEN
using namespace std;
int min_jumps(int arr[],int n)
{
    int i=0,jumps=0;
    while(i<n)
    {
        i=i + arr[i];
        jumps++;
        if(arr[i]==0)
        {
            return -1;
        }
        
    }
    
return jumps;
}

int main(){
  
int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}; 
    int N=sizeof(arr)/sizeof(arr[1]);
    cout<<min_jumps(arr,N);
    return 0;
}