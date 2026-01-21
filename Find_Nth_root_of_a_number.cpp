#include<bits/stdc++.h>
using namespace std;
    long long pow(long long base, int exp, int M) {
        long long ans = 1;
        while (exp > 0) {
            if (exp & 1) {
                ans *= base;
                if (ans > M) return M + 1; // overflow control
                exp--;
            } else {
                base *= base;
                if (base > M) return M + 1;
                exp /= 2;
            }
        }
        return ans;
    
}
  int NthRoot(int N, int M) {
       int low=0, high=M; 
       while(low<=high){
        int mid= low+(high-low)/2;
       long long val= 1LL*pow(mid, N, M);
       if(val==M)return mid;
      else if(val<=M)low= mid+1;
       else
       high= mid-1;
       
       }
       return -1;
    }
    
    int main(){
        int N, M;
        cin>>N>>M;

        
        int ans= NthRoot(N, M);
        cout<<ans<<endl;
    }