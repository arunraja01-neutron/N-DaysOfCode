class Solution {
    public int firstMissingPositive(int[] nums) {
        int size=nums.length;
        if(size==0) return 1;
        if(size==1 && nums[0]!=1) return 1;
        if(size==1 && nums[0]==1 ) return 2;
        Arrays.sort(nums);
        //if(nums[0]==0 && nums[1]!=1) return 1;
        if(nums[0]>0 && nums[0]!=1) return 1;
        for(int i=0; i<size-1; ++i){
            if(nums[i]<=0 && (nums[i+1]>0 && nums[i+1]!=1))return 1;
            if(nums[i]>0 && nums[i+1]-nums[i]>1) return nums[i]+1;
        }
        if(nums[size-1]<=0) return 1;
        return nums[size-1]+1;
    }
}
