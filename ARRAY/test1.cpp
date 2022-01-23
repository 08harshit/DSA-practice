#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{   int first = 0,second = 1,third= 2;
	int count=0;
	    sort(arr,arr+n);
	    while(first<n-1 )
	    {
	        second = first+1;
	        third = first +2;
	        while(third <n)
	        {
	             if((arr[first]+arr[second])==arr[third])
	             {
	            count++; 
	             }
	             else
	             {
	             second++;
	             }
	            third++;    
	        }
	        first++;
	    }
	        return count;
	    }
	    // Your code goes here
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends