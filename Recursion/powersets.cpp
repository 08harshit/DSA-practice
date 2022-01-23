#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
int subsets = 0;
void power_set(vector<int> input, vector<int> output, int index)
{
    if (index >= input.size())
    {
        for (auto i : output)
        {
            cout << i ;
        }
        cout << endl;
        subsets++;
        return;
    }

    power_set(input, output, index + 1);
    output.push_back(input[index]);
    power_set(input, output, index + 1);
}
int main()
{
    vector<int> subset;
    int size;
    cout << "Enter size of array:";
    cin >> size;
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    power_set(vec, subset, 0);
    cout<<subsets;
    return 0;
}