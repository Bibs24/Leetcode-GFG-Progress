class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        int start = 1, end = x/2, res;
        while(start <= end){
            long long mid = (start + end)/2;
            long long sqr = mid * mid;
            if(sqr == x) return mid;
            if(sqr <= x){
                start = mid + 1;
                res = mid;
            }
            else{
                end = mid - 1;
            }
        }
        return res;
    }
};