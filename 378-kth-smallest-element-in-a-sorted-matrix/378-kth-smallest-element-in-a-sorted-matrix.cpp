class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int a[n*n];
        int it = 0;
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                a[it] = matrix[i][j];
                it++;
            }
        }
        sort(a,a+(n*n));
        int res = a[k-1];
        return res;
    }
};