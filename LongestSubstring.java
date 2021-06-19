class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;
        if(s.length()==2){
            if(s.charAt(0)==s.charAt(1)) return 1;
            return 2;
        }
        int i=0, j=0, ans=1;
        int[] arr= new int[326];
        Arrays.fill(arr, 0);
        arr[s.charAt(0)]++;
        while( j!=s.length()-1 ){
            if(arr[s.charAt(j+1)]==0) {
                j++;
                arr[s.charAt(j)]++;
                //ans=max(ans,j-i+1);
                ans=ans>j-i+1?ans:j-i+1;
            }
            else{
                arr[s.charAt(i)]--;
                i++;
            }
        }
        return ans;
    }
}
