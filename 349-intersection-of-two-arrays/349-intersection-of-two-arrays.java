class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int arr[] = new int[1001];
        for(int x: arr){
            arr[x] = 0;
        }
        for(int x: nums1){
            arr[x]++;
        }
        List<Integer> li = new ArrayList<>();
        for(int x: nums2){
            if(arr[x] != 0) li.add(x); arr[x] = 0;
        }
        int[] ans = li.stream().mapToInt(Integer::intValue).toArray();
        return ans;
    }
}