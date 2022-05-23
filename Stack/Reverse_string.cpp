#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;

int main()
{
    stack<char> str;
    string str1 = "mar ayis";
    int strsize=str1.size();
    for(int i=0;i<strsize;i++)
    {
        str.push(str1[i]);
    }
    for(int i=0;i<strsize;i++)
    {
        str1[i]=str.top();
        str.pop();
    }
    cout<<str1;
    return 0;
}