class Solution {
public:
    vector<int> pse(vector<int>&arr){
         int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> s;
        for(int i = 0 ; i < n ; i++){
            while(!s.empty() && arr[s.top()] > arr[i] ){
                s.pop() ; 
            }
            if (!s.empty()) {
                ans[i] = s.top();
            }

            s.push(i);
        }
    return ans ;  
    }
    vector<int>  nse(vector<int>&arr){
        int n = arr.size() ; 
        vector<int>ans(n , n ) ; 
        stack<int>s ; 
        for(int i = n-1 ; i>= 0 ; i--){
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            if (!s.empty()) {
                ans[i] = s.top();
            }
        s.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        const long long MOD = 1e9 + 7;

        int n = arr.size();

        vector<int> left = pse(arr);
        vector<int> right = nse(arr);

        long long ans = 0;

        for(int i = n-1  ; i >= 0 ; i-- ){
            long long lc = i - left[i];
            long long rc = right[i] - i;

         ans = (ans + (1LL * arr[i] * lc % MOD) * rc % MOD) % MOD;
        }
    return ans ; 
   }
};