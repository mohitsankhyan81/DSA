#include <iostream>
using namespace std;

int partition(int arr[],int st,int end){
  int idx=st-1;
  int pivot=arr[end];

  for(int j=st;j<end;j++){
    if(arr[j]<=pivot){
      idx++;
      swap(arr[j],arr[idx]);
    }
  }
  idx++;
  swap(arr[end],arr[idx]);
  return idx;
}


void quicksort(int arr[],int st,int end){
  if(st<end){
    int pivot=partition(arr,st,end);

    quicksort(arr,st,pivot-1);

    quicksort(arr,pivot+1,end);
  }
}
int main(){
  int arr[]={34,56,34,23,45,23,23,12,11};
  int n=sizeof(arr)/sizeof(int);
  

  quicksort(arr,0,n-1);


  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}