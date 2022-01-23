#include<iostream>                               //HARSHIT SEN
using namespace std;
bool sorted(int arr[],int index,int n)
{
    if (index>=n)
    {
        return true;
    }
    if(arr[index]<arr[index-1])
    {
        return false;
    }
    sorted(arr,index+1,n);
}
int main(){
    int index =1;
    int arr[]={1,3,4,5,2,7};
    int n=sizeof(arr)/sizeof(arr[1]);
    bool answer=sorted(arr,index,n);
    cout<<answer;
    return 0;
}