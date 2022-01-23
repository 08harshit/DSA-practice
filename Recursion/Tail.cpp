#include<iostream>                               //HARSHIT SEN
using namespace std;
void tail(int n)
{

if(n==0)
{ return;
}
tail(n-1);
cout<<n<<" ";  // in head recurssion we print before recurssive call

}
int main(){
 tail(5);   
    return 0;
}