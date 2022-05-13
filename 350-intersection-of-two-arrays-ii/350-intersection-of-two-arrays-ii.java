class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int[] a = new int[1001];
        List<Integer> li = new ArrayList<>();
        for(int num : nums1) a[num]++;
        for(int num : nums2){
            if(a[num] > 0){
                li.add(num);
                a[num]--;
            }
        }
        int[] ans = new int[li.size()];
        for(int i=0;i<li.size();i++) ans[i] = li.get(i);
        return ans;
    }
}