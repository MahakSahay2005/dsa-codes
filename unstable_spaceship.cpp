#include <bits/stdc++.h>
using namespace std;
int unstability(vector<int>arr,int x,int i,int s)
{
  if(i==2*x)return 0;
  int val = INT_MAX;
  if(i+1<2*x){
    val = min(val,unstability(arr,x,i+2,s) + abs(arr[i+1]-arr[i]));
  }
  if(s<2){
    val = min(val,unstability(arr,x,i+1,s+1));
  }
  return val;
}
int main(){
  int x;
  cin>>x;
  vector<int>arr(2*x);
  for(int i = 0;i<2*x;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  int val1 = unstability(arr,x,0,0);
  cout<<val1;
}