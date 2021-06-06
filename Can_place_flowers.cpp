class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int size = arr.size();
        if(n==0) return true;
        if( size==1 && arr[0]!=1 ) return true;
        int count=n;
        for(int i=0; i<size; ++i){
            if( arr[i]!=1 ){
                if( i==0 && arr[i]!=1){
                    if( arr[i+1]!=1 ) {
                        --count;
                        arr[i] = 1;
                        //continue;
                    }
                }
                else if( i==arr.size()-1 && arr[i]!=1){
                    if( arr[i-1]!=1 ){
                        --count;
                        arr[i] = 1;
                        //continue;
                    }
                }
                else if( arr[i-1]!=1 && arr[i+1]!=1 ){
                    arr[i] = 1;
                    --count;
                }
            }
            if( count==0 ) return true;
        }
        
        return false;
        
    }
};
