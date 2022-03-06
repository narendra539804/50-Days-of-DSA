class Solution {
public:
    int countOrders(int n) {
        
        if(n==1) return 1;
        
        int mod = 1000000007;
        
        int k = 2*n-1;
        
        long long ans = ((((k*(k+1))/2)%mod)*((long long)countOrders(n-1)%mod))%mod;  
        
        return ans;
        
    }
};