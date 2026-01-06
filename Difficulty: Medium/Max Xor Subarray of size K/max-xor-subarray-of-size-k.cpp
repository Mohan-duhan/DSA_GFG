class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int> prefix(n+1,0);
        
        for(int i = 0;i<n;i++){
            prefix[i+1] = prefix[i]^arr[i];
        }
        
        int maxXor = 0;
        
        for(int i = 0;i<=n-k;i++){
            int j = i+k-1;
            int currXor = prefix[j+1]^prefix[i];
            
            maxXor = max(maxXor,currXor);
        }
        return maxXor;
    }
};