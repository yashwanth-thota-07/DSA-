#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int n = 6;
   int arr[6] = {10, 20, 30, 40, 50, 60};

   //shift left by 1 place

   int temp = arr[0];

   for(int i = 0; i<=n-2;i++){
    arr[i] = arr[i+1];
   }

   arr[n-1] = temp;

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}