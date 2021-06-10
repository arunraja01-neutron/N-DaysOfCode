class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        ArrayList<Integer> arr = new ArrayList<>();
        int[] a = new int[nums.length+1];
        for(int i=0; i<nums.length; ++i){
            a[nums[i]]++;
        }
        for(int i=0; i<a.length; ++i){
            if(a[i]==2)
            arr.add(i);
        }
        return arr;
    }
}
