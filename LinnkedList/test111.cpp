#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ntc;
    cin>>ntc;
    string str;
    {
        while(ntc--)
        {  int count=0,size;
            cin>>size;
            cin>>str;
            for(int i=0;i<size;i++)
            {   if(str[i]=='1')
                {
                    for(int j=i;j<size;j++)
                    {
                        if(str[j]=='1')
                        {
                            count++;
                        }
                    }
                    
                }
            }
            
            cout<<count<<endl;
        }
    }
    return 0;
}