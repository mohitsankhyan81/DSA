#include <iostream>
using namespace std;

void minmax(int arr[],int n){
  int min=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<min<<endl;
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<max<<endl;
}
int main(){
  int arr[]={5,2,7,1,0};
  int n=sizeof(arr)/sizeof(int);
  minmax(arr,n);
  return 0;
}