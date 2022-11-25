class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
         vector<long> s, sums(n,0);
        long j, res=0, mod = 1000000007;
        for (int i = 0; i < n; ++i)
        {
            while (!s.empty() && arr[s.back()] > arr[i])
                s.pop_back();
            j = !s.empty() ? s.back() : -1;
            
            sums[i] = ((j>=0?sums[j]:0) + (i-j)*arr[i]) % mod;
            s.push_back(i);
        }

        for (int i = 0; i < sums.size(); ++i)
            res = (res + sums[i]) % mod;
        return res;
    }
    
};