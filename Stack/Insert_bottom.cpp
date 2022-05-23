#include<bits/stdc++.h>                               //HARSHIT SEN
using namespace std;
void in_bottom(stack<int> &s,int bottom)
{                                    
    if(s.empty())
    {
        s.push(bottom);               //base condition
        return;
    }
    int cur_top=s.top();
    s.pop();
    in_bottom(s,bottom);
    s.push(cur_top);
}
int main(){
    stack<int> st;
    st.push(2);                                                          
    st.push(1);
    st.push(5);
    st.push(7);
    st.push(9);
    in_bottom(st,0);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    
    return 0;
}