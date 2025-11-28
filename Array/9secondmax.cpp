#include <iostream>
using namespace std;

void secondmax(int arr[],int n){
  int max=arr[0];
  int second=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      second=max;
      max=arr[i];
    }
    else if(second<arr[i]&&max!=arr[i]){
      second=arr[i];
    }
  }
  cout<<second<<endl;
}

int main(){
  int arr[]={2,3,10,12,10,6,14,2};
  int n=sizeof(arr)/sizeof(int);

  secondmax(arr,n);
  return 0;
}