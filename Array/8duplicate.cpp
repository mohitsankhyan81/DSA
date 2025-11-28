#include <iostream>
using namespace std;

void duplicate(int arr[],int n,int element){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      count++;
    }
  }
  if(count==2){
    cout<<"duplicate";
  }
  else{
    cout<<"Not duplicate";
  }
}

int main(){
  int arr[]={2,3,10,12,10,6,14,2};
  int n=sizeof(arr)/sizeof(int);
  int element=2;
  duplicate(arr,n,element);
  return 0;
}