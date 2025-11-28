#include <iostream>
using namespace std;

void evenodd(int arr[],int n){
  cout<<"Even is"<<endl;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      cout<<arr[i]<<" ";
    } 
  }
  cout<<endl;
  cout<<"Odd is"<<endl;
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
      cout<<arr[i]<<" ";
    }
  }
}
int main(){
  int arr[]={2,1,10,21,13,6,15,4};
  int n=sizeof(arr)/sizeof(int);

  evenodd(arr,n);
  return 0;
}