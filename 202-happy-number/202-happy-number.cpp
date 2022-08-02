class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        map<int,int> mp;
        while(n != 1){
            int temp = 0;
            while(n > 0){
                int rem = n%10;
                temp += rem*rem;
                n /= 10;
            }
            if(mp[temp] == 1){
                return false;
            }else{
                mp[temp] = 1;
            }
            n = temp;
        }
        return true;
    }
};