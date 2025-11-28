#include <iostream>
using namespace std;
void arravg(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
  cout<<(double)sum/n<<endl;
}
int main(){
  int arr[]={2,4,5,1,10,4,0,3};
  int n=sizeof(arr)/sizeof(int);
  arravg(arr,n);
  return 0;
}