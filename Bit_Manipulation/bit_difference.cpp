#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;

int main()
{
int a,b,XOR,count=0;
cin>>a>>b;
XOR=a^b;
while(XOR)
{
count++;
XOR=XOR&(XOR-1);

}
cout<<count;
    return 0;
}