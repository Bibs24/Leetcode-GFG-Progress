// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            int[] nums = new int[n];
            String[] S = br.readLine().trim().split(" ");
            for(int i = 0; i < n; i++){
                nums[i] = Integer.parseInt(S[i]);
            }
            Solution obj = new Solution();
            int[] ans = obj.sortedArrayToBST(nums);
            for(int i = 0; i < ans.length; i++)
                System.out.print(ans[i] + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    public int[] sortedArrayToBST(int[] nums)
    {
        List<Integer> li = new ArrayList<>();
        getBST(li,nums,0,nums.length -1);
        return li.stream().mapToInt(i->i).toArray();
    }
    public void getBST(List<Integer> li, int[] nums, int start, int end){
        if(start > end) return;
        int midp = start + (end - start)/2;
        li.add(nums[midp]);
        getBST(li,nums,start,midp-1);
        getBST(li,nums,midp+1,end);
    }
}