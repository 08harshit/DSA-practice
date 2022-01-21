#include<bits/stdc++.h>                               //HARSHIT SEN

using namespace std;
void reverse(string s)
{
    vector<string> temp;
    string str= "";
    for(int i=0;i<s.length();i++)
    {
        if (s[i]==' ')
        {
            temp.push_back(str);
            str = "";
        }
        else{
            str=str +s[i];
        }
        
    }
    temp.push_back(str);
      for(int i=temp.size()-1;i>=0;i--)
      {
          cout<<temp[i]<<" ";
          
      }
      


}

int main(){
    string s;
    getline(cin,s);
    reverse(s);
    return 0;
}