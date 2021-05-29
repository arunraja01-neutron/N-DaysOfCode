class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if( nums.size()==1 ){
            return nums[0];
        }
        int temp=0, max=INT_MIN;
        for(int i=0; i<nums.size(); ++i){
            temp+=nums[i];
            if( temp>max ){
                max = temp;
            }
            if( temp<0 ){
                temp=0;
            }
        }
        
        return max;
    }
};
