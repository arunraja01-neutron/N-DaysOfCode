class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        int arr[n];
        memset(arr, -1, sizeof(arr));
        for(int i=0; i<n; ++i){
            if(gallery[i]==0){
                arr[i] = max(arr[i],i);
                continue;
            }
            if(gallery[i]!=-1){
                int k = i+gallery[i];
                int j = max(0,i-gallery[i]);
                for(int s=j; s<=min(n,k); ++s) arr[s] = max(k,arr[s]);
            }
        }
        int count=0,i=0;
        while( i<n ){
            if(i==-1 || arr[i]==-1) return -1;
            ++count;
            i = arr[i]+1;
        }
        return count;
    }
};
