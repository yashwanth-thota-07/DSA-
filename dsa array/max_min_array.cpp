#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int arr[6] = {7, 4, 5, 9, 2, 1}; 
   int maxt = INT_MIN;
   int mint = INT_MAX;

   for(int i = 0;i<6;i++){
    if(arr[i]>maxt){
        maxt = arr[i];
    }
    if(arr[i]<mint){
        mint = arr[i];
    }
   }

   cout<<maxt<<mint;

}