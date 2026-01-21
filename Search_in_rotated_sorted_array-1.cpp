#include<bits/stdc++.h>
using  namespace std;
int search_in_rotatedArray(vector<int>& nums, int k) {
       int low=0, high=nums.size()-1;
       while(low<=high)
{
    int mid=(low+high)/2;
    if(nums[mid]==k)return mid;
    if(nums[low]<=nums[mid]){
        if(nums[low]<=k&& k<=nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    else{
        if(nums[mid]<=k && k<=nums[high]){
            low=mid+1;
        }
        else{
            high= mid-1;
        }
    }
    

}   
return -1;
    }
    int main(){
        int n; 
        cin>>n;
        int k;
        cin>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int ans= search_in_rotatedArray(nums, k);
        cout<<ans<<endl;
        
    }