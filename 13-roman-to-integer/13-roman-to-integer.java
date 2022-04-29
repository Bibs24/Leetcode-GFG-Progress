class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> mp = new HashMap<>();
        mp.put('I',1);
        mp.put('V',5);
        mp.put('X',10);
        mp.put('L',50);
        mp.put('C',100);
        mp.put('D',500);
        mp.put('M',1000);
        int res = 0;
        for(int i=0; i < s.length()-1 ;i++){
            int c = mp.get(s.charAt(i));
            int next = mp.get(s.charAt(i+1));
            res = c < next ? res - c: res + c;
        }
        return res + mp.get(s.charAt(s.length()-1));
    }
}