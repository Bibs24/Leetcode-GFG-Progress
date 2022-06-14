class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int start = matrix[0][0];
        int end = matrix[n-1][n-1];
        while(start < end){
            int mid = start + (end - start)/2;
            int cnt = 0;
            for(int i=0;i<n;i++){
                cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
            }
            if(cnt < k){
                start = mid + 1;
            }else{
                end = mid;
            }
        }
        return start;
    }
};