class Solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
        if(n==1) return;
        if(n==2){
            if(arr[0]<arr[1]){
                int temp = arr[0];
                arr[0] = arr[1];
                arr[1] = temp;
                return ;
            }
        }
        vector<int> even_arr, odd_arr; 
        if(n%2==0){
            for(int i=n-1; i>=0; --i){
                if(i>=(n/2)){
                    even_arr.push_back(arr[i]);
                }
                else{
                    odd_arr.push_back(arr[i]);
                }
            }
        }
        else{
            for(int i=n-1; i>=0; --i){
                if(i>=(n/2)){
                    even_arr.push_back(arr[i]);
                }
                else{
                    odd_arr.push_back(arr[i]);
                }
            }
        }
        int oc=odd_arr.size()-1,ec=0;
        for(int i=0; i<n; ++i){
            if(i%2==0){
                arr[i] = even_arr[ec];
                ec++;
            }
            else{
                arr[i] = odd_arr[oc];
                oc--;
            }
        }
        
    }
};
