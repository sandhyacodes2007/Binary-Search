#include<bits/stdc++.h>
using namespace std;
 bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
             int low=0, high=nums.size()-1;
       while(low<=high)
{
    int mid=(low+high)/2;
    if(nums[mid]==k)return true;
    if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
       low=low+1;
       high=high-1;
            continue;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=k && k<=nums[mid]){
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
return false;
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
        int ans= searchInARotatedSortedArrayII(nums, k);
        cout<<ans<<endl;
    }