#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int n = 7;
   int arr[7] = {1,2,3,4,5,6,7};

   int target = 1;

   int st = 0;
   int en = n-1;
   int mid;
   int ans;

   while(st<=en){

    mid = (st+en)/2;

    if(arr[mid] < target){
        st = mid + 1;
    }
    else if (arr[mid] > target){
        en = mid - 1;
    }
    else{
        ans = mid;
        break;
    }
   }

   cout<<"required index is at index : "<<ans;

}