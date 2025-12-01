#include <iostream>
using namespace std;

void bubbleshort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }

  for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={45,67,45,67,34,78,34,23,46};
  int n=sizeof(arr)/sizeof(int);

  bubbleshort(arr,n);
  return 0;
}