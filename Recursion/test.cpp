#include<bits/stdc++.h>
using namespace std;
int totalSubset = 0;

//index-> ith index of input array
// subset: array to store the subset
void printSubset(vector<int> input, vector<int> output, int index) {

//if saare elements traverse ho chuke hai
  if(index>=input.size()) {
      //print the output array
      for(auto i : output) {
        cout<<i<<" ";
      }cout<<endl;
        totalSubset++;
      return ;
  }

  //nahi lena hai
  printSubset(input,output,index+1);

  // lena hai
  output.push_back(input[index]);
  printSubset(input,output,index+1);
}

int main() {
  
  cout<<"Enter  size"<<endl;
  int size;
  cin>>size;

  vector<int> vec(size);
  vector<int> subset; // to store subset, 2^n

  cout<<"Enter elements: "<<endl;
  for(int i=0; i<size; i++) {
    cin>>vec[i];
  }

  cout<<"Power Set is as follows:"<<endl;
  printSubset(vec,subset,0);

  cout<<"Total Number of Subsets is "<<totalSubset<<endl;
  //should be 2^n
}

