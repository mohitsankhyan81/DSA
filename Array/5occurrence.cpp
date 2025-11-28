//Count occurrences of a given element

#include <iostream>
using namespace std;
int findoccurrences(int arr[],int n,int t){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==t){
      count++;
    }
  }
  return count;
}
int main(){
  int arr[]={2,4,2,1,10,2,0,3};
  int n=sizeof(arr)/sizeof(int);
  int target=2;
  cout<<findoccurrences(arr,n,target)<<endl;
  return 0;
}