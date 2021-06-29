class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int zero=0,one=0;
        for(int i=0; i<n; ++i){
            if(arr[i]==0) zero++;
            else one++;
        }
        if(zero==0 || one==0 ) return;
        for(int i=0; i<n; ++i){
            if(i<zero) arr[i] = 0;
            else arr[i] = 1;
        }
    }
};
