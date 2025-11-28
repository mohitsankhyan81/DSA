#include <iostream>
using namespace std;

void reversearray(int arr[],int n){
  for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={2,4,5,1,10,6,0,3};
  int n=sizeof(arr)/sizeof(int);
  reversearray(arr,n);
  return 0;
}