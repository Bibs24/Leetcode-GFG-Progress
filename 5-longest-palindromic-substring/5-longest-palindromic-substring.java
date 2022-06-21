class Solution {
    public String longestPalindrome(String s) {
        int start = 0, end = 0;
        int l1,l2;
        for(int i=0;i<s.length();i++){
            l1 = expandFromCentre(s,i,i+1);
            l2 =expandFromCentre(s,i,i);
            int l = Math.max(l1,l2);
            if(end-start < l){
                start = i - (l-1)/2;
                end = i + l/2;
            } 
        }
        return s.substring(start,end+1);
        
    }
    int expandFromCentre(String s,int i,int j){
        while(i>=0 && j<s.length() && s.charAt(i) == s.charAt(j)){
            i--;
            j++;
        }
        return j-i-1;
    }
}