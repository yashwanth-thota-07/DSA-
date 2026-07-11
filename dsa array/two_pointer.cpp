#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 5;

    sort(arr.begin(),arr.end());
    int st = 0;
    int en = n-1;
    while(st<en){
        
        if((arr[st] + arr[en]) > sum){
            en--;
        }
         else if((arr[st] + arr[en]) < sum){
            st++;
        }
        else{
            //desired output
            break;
        }

    }

}