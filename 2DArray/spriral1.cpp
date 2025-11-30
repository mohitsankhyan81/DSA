#include <iostream>
using namespace std;
void spiral1(int m,int n,int arr[3][4]){
  int left=0;
  int right=n-1;

  int top=0;
  int bottam=m-1;

  while(left<=right && top<=bottam){
    for(int i=left;i<=right;i++){
      cout<<arr[top][i]<<" ";
    }
    top++;

    for(int i=top;i<=bottam;i++){
      cout<<arr[i][right]<<" ";
    }
    right--;

    if(top<=bottam){
      for(int i=right;i>=left;i--){
        cout<<arr[bottam][i]<<" ";
      }
      bottam--;
    }
    if(left<=right){
      for(int i=bottam;i>=top;i--){
        cout<<arr[i][left]<<" ";
      }
      left++;
    }
  }
}
int main(){
  int m=3;
  int n=4;
  int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  spiral1(m,n,arr);
  return 0;
}