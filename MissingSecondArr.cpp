class Solution{	
	
	public:
	bool binary_search(long long arr[], long long size, long long search){
	    long long l = 0, r = size-1;
	    while( l<=r ){
	        long long mid = (l+r)/2;
	        if(arr[mid]==search) return true;
	        else if(arr[mid]<search) l = mid+1;
	        else r = mid-1;
	    }
	    return false;
	} 
	
	
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    
	    vector<long long> res;
	    sort(B, B+M);
	    for(int i=0; i<N; ++i){
	        if(!binary_search(B, M, A[i])){
	            res.push_back(A[i]);
	        }
	    }
	    
	    return res;
	} 
};
