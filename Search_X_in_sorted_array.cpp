#include<bits/stdc++.h>
using namespace std;
int searchXinArray(vector<int>& arr, int target){
    int n = arr.size();
    int left= 0;
    int right= n-1;
    while(left<=right){
        int mid= left+right/2;
        
    if(arr[mid]==target)return mid;
       else if(arr[mid]<target)
            left= mid+1;

        
        else
        right= mid-1;
    
    }
     return -1;

}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=  searchXinArray(arr, target);
    cout<<ans<<endl;
    return 0;
}
