#include<bits/stdc++.h>
using namespace std;

    int lowerBound(vector<int> &nums, int x){
        int n= nums.size();
        int low=0 , high= n-1, mid;
        int ans= n;
        while(low<=high){
            mid= (low+ high)/2;
            if(nums[mid]>=x)
            {
                ans= mid;
            
            high= mid-1;
            }
            else {
            low= mid+1;
        }
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];

        }

        
    }