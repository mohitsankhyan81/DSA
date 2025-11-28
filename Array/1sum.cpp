#include <iostream>
using namespace std;

void arrsum(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  cout<<sum;
}
int main(){
  int arr[]={2,4,5,1,10,4,0,3};
  int n=8;
  arrsum(arr,n);
  return 0;
}