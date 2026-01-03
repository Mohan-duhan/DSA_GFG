// User function template for C++
class Solution {
  public:
    vector<int> printUnsorted(vector<int>& arr) {
        // Code here
        int n = arr.size();
        
        vector<int> res(arr.begin() , arr.end());
        sort(arr.begin() , arr.end());
        
        int start = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] != res[i]){
                start = i;
                break;
            }
        }
        
        int end = 0;
        for(int i = n-1;i>0;i--){
            if(arr[i] != res[i]){
                end = i;
                break;
            }
        }
return {start,end};
    }
};