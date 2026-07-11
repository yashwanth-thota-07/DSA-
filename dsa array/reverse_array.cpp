#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int arr[6] = {1,2,3,4,5,6};
  int n = 6;
  int st = 0;
  int en = n-1;

  while(st<en){
    swap(arr[st],arr[en]);
    st++;
    en--;
  }
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}