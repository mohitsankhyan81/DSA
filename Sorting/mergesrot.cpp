#include <iostream>
#include <vector>
using namespace std;

void mergesort(int arr[],int st,int mid,int end){
  vector<int>result;
  int i=st;
  int j=mid+1;
  while(i<=mid && j<=end){
    if(arr[i]<=arr[j]){
      result.push_back(arr[i]);
      i++;
    }
    else{
      result.push_back(arr[j]);
      j++;
    }
  }

  while(i<=mid){
    result.push_back(arr[i]);
    i++;
  }
  while(j<=end){
    result.push_back(arr[j]);
    j++;
  }

  for(int i=0;i<result.size();i++){
    arr[st+i]=result[i];
  }
}

void merge(int arr[],int st,int end){
  if(st<end){
    int mid=st+(end-st)/2;

    merge(arr,st,mid);
    merge(arr,mid+1,end);

    mergesort(arr,st,mid,end);
  }
}
int main(){
  int arr[]={45,234,22,56,234,23,5623};
  int n=sizeof(arr)/sizeof(int);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  merge(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}