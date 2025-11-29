#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>arr(5);
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];
  }

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}