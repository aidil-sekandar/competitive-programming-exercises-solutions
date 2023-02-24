#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> arr;
  int n,sum=0;
  cin>>n;
  for (int i=1;i<=n;i++){
    if(i%2==0){
      arr.push_back(i);
    }else{
      arr.push_back(-i);
    }
  }
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<sum;
  return 0;
}