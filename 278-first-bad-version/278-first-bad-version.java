/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int start = 0, end = n;
        while(start < end){
            int midp = start + (end - start)/2;
            if(isBadVersion(midp)){
                end = midp;
            }else{
                start = midp + 1;
            }
            if(start == end && isBadVersion(start)) return start;
        }
        return -1;
    }
}