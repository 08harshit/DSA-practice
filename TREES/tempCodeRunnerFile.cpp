#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string S,T,M;
    int ntc,j;
    for(int i=0;i<5;i++)
    {
        cin>>S>>T;
        for(int j=0;j<5;j++)
        {
            if(S[j]==T[j])
            {
                M[j]='G';
            }
            else {
                M[j]='B';
            }
        cout<<M<<endl;    
        }
    }
	return 0;
}