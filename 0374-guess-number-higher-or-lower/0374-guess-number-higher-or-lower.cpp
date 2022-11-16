/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n, long s = 1) {
        
        // while(s <= n){
        //     int x = (s+n)/2;
        //     int g = guess(x);
        //     if(g == 0) return x;
        //     if(g < 0) n = x-1;
        //     if(g > 0) s = x+1;
        // }
        // return -1;
        int l = 1, r = n;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(guess(mid) == 0){
                return mid;
            }else if (guess(mid) == -1){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return 0;
    }
};