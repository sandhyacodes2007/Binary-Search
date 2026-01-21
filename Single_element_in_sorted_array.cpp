#include<bits/stdc++.h>
using namespace std;
 int singleNonDuplicate(vector<int> &nums) {
        int n=nums.size();
        int low=0, high=n-1, mid;
        while(low<=high){
            mid= low+(high-low)/2;
            if(nums[0]!=nums[1] )return nums[0];
            if(nums[n-1]!= nums[n-2])return nums[n-1];
            if(nums[mid]!= nums[mid+1]&& nums[mid]!= nums[mid-1])return nums[mid];

            if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1])){
                low= mid+1;
            }
            else {
                high= mid-1;
            }
        
        
        }
        return nums[mid];
    }
    
    int main(){
        int n; 
        cin>>n;
        
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int ans= singleNonDuplicate(nums);
        cout<<ans<<endl;
    }