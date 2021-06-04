class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); ++i){
            s.insert(nums[i]);
        }
        set<int>::iterator it;
        cout << s.size()<<endl; 
        for(it=s.begin(); it!=s.end(); ++it){
            cout << *it << " ";
        }
        if( nums.size()==1 ){
            return nums[0];
        }
        else if( s.size()==2 ){
            return (*max_element(nums.begin(),nums.end()));
        }
        else{
        int count=0;
        for(it=s.end(); it!=s.begin(); --it){
            if( count==3 ){
                return *it;
            }
            else{
            ++count;
            }
        }
        }
        return *it;
    }
};
