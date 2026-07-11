#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int n = 6;
   vector<int> arr = {10, 20, 30, 40, 50, 60};
   
   int k = 2;
   //left shift k

    k = k%n;

    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());

    for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}