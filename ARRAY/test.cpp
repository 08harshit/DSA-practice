#include<bits\stdc++.h>
using namespace std;
int main()
{
	int i,arr1[] = {900, 940, 950, 1100, 1500, 1800},arr2[] = {910, 1200, 1120, 1130, 1900, 2000},j,count[6] = {1,1,1,1,1,1};
//	cout<<"enter the size : "<<endl;
//	cin>>n;
//	cout<<"enter the elements of arrival : "<<endl;
//	for(i=0;i<n;i++)
//	{
//		cin>>arr1[i];
//	}
//	cout<<"enter the elements departure : "<<endl;
//	for(i=0;i<n;i++)
//	{
//		cin>>arr2[i];
//	}
//	for(i=0;i<n;i++)
//	{
//		count[i] = 1;
//	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(arr2[i]>arr1[j])
			count[i]++;
		}
	}
	sort(count,count +6);

	cout<<count[5];
}