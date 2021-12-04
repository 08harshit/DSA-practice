#include <iostream>
#include <algorithm>
using namespace std;      //HARSHIT SEN
void platform(int ari[], int dep[], int n)
{
    int count[6] = {1, 1, 1, 1, 1, 1};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dep[i] > ari[j])
                
            {
                count[i]++;
            }
        }
    }
    sort(count, count + 6);
    cout << "Number of platforms required:" << count[5];
}
using namespace std;
int main()
{

    int ari[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(ari) / sizeof(ari[0]);
    platform(ari, dep, n);
    return 0;
}