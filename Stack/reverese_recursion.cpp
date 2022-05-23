#include<bits/stdc++.h> //HARSHIT SEN
using namespace std;
void in_bottom(stack<int> &s, int bottom)
{
    if (s.empty())
    {
        s.push(bottom); //base condition
        return;
    }
    int cur_top = s.top();
    s.pop();
    in_bottom(s, bottom);
    s.push(cur_top);
}
void reverse(stack<int> &s)
{
    
   
   {if (s.empty())
        return;}
        int x = s.top();
     s.pop();
    reverse(s);
    in_bottom(s, x);
}

int main()
{

    stack<int> s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i);
    }

    reverse(s);

    cout << "Reversed stack is ";
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}