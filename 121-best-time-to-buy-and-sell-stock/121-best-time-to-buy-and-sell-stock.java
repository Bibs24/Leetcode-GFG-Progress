class Solution {
    public int maxProfit(int[] prices) {
        int l =0;
        int r =1;
        int mp =0;
        while(r < prices.length){
            int cp = prices[r] - prices[l];
            if(prices[l] <prices[r]){
                mp = Math.max(cp,mp);
            }
            else{
                l = r;
            }
            r += 1;
        }
        return mp;
    }
}