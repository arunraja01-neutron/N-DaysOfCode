class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp;
        temp.push_back(1);
        res.push_back(temp);
        for(int z=1; z<numRows+1; ++z){
            temp.clear();
            for(int i=0; i<z; ++i){
                if( i==0 || i==(z-1) ){
                    temp.push_back(1);
                }
                else{
                    int a = res[z-1][i-1];
                    int b = res[z-1][i];
                    temp.push_back(a+b);
                }
            }
            res.push_back(temp);
        }
        res.erase(res.begin());
        return res;
    }
};
