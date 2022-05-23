#include <bits/stdc++.h> //HARSHIT SEN
#include<bitset>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n)
    {

        n=n&(n - 1);
        cnt++;
    }
    cout<<cnt;
    return 0;
}