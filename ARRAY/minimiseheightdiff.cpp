#include<bits/stdc++.h>                               //HARSHIT SEN
using namespace std;


int main(){
int k,n;
cin>>k>>n;
int arr[n],max=0,min=1000000;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]>k)
    {
        arr[i]=arr[i]-k;
    }
    if(arr[i]<=k)
    {
        arr[i]=arr[i]+k;
    }
     if(arr[i]>=max)
    {
        max=arr[i];
    }
    if(arr[i]<=min)
    {min=arr[i];}
}
   cout<<"\nDifference between max and min:"<<max-min<<endl;
    return 0;
}