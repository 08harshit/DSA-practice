#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum;
    cout<<"Enter sum:";
    cin>>sum;
    for(int i=0;i<=n;i++)
    {
        int currentsum=arr[i];
          for(int j=i+1;i<n;j++)
          {
              if(currentsum==sum)
              {
                  cout<<"sum found from index"<<i<<"to"<<j;
                  break;
              }
              else if(currentsum>sum)
              {
                  break;
              }
              currentsum =currentsum+ arr[j];

          }
    }
    return 0;
}