#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
void digit(string str[], int number)
{
    if (number == 0)
    {
        return;
    }
    digit(str, number / 10);

    cout << str[number % 10] << "  io";
}
int main()
{
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int number;
    cout << "Enter a number:";
    cin >> number;
    digit(str, number);
    return 0;
}