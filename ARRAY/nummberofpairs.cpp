#include<iostream>
#include<math.h>
using namespace std;
void pairs(int A[],int B[],int n,int m)
{   int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(pow(A[i],B[j])>pow(B[j],A[i]))
            {
                count++;
            }
        }
    }

cout<<"\nnumber of pairs:"<<count;
}

int main()
{  int X[] = {2,1,6};

 int Y[] = {1,5};
    int n=3;
    int m=2;
    pairs(X,Y,n,m);
    return 0;
}