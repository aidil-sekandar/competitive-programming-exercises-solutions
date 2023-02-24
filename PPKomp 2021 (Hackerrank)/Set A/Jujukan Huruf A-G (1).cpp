#include <iostream>
using namespace std;

int main(){
  char a[]={'A','B','C','D','E','F','G'};
  int b,c=0;
  cin>>b;
  c=(b%7)-1;
  if (c<0){
    cout<<a[c+7];
  }else{
    cout<<a[c];
  }
  return 0;
}