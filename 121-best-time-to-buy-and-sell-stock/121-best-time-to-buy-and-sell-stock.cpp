class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int mp=0;
        while(r < prices.size()){
            int cp = prices[r] - prices[l];
            if(prices[l] < prices[r]){
                mp = max(cp,mp);
            }else{
                l = r;
            }
            r += 1;
        }
        return mp;
    }
};