#include<bits/stdc++.h>
using namespace std;
int findfloor(vector<int>& nums,int n, int x){
   
    int low=0, high= n-1;
    int ans=-1;
    while(low<= high){
        int mid=(low+high)/2;
        if(nums[mid]<=x){
ans=nums[mid];
low=mid+1;

        }
        else{
            high= mid-1;
        }  
         }
         return ans;
}
int findCeil(vector<int>& nums ,int n, int x){
    int low=0, high= n-1;
    int ans=-1;
    while(low<= high){
        int mid=(low+high)/2;
        if(nums[mid]>=x){
ans=nums[mid];
high=mid-1;

        }
        else{
            low= mid+1;
        }  
         }
         return ans;
}
vector<int> getFloorAndCeil(vector<int> nums, int x){
    int n=nums.size();
    int floor= findfloor(nums,n,x);
    int Ceil=findCeil(nums, n, x);
    return {floor, Ceil};
}
int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;
    
    vector<int> result = getFloorAndCeil(nums, x);
    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;
    
    return 0;
}
