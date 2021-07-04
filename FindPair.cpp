class Solution{
public:	
	int get_max(int arr[], int n){
	    int maxi = arr[0];
	    for(int i=1; i<n; ++i){
	        if(arr[i]>maxi){
	            maxi = arr[i];
	        }
	    }
	    return maxi;
	}
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int,int> mp;
	    for(int i=0; i<n; ++i){
	        mp[arr[i]] = i;
	    }

	    for(int i=0; i<n; ++i){
	        //cout << mp.find(x-arr[i]) ;
	        if(mp.find(x-arr[i])!=mp.end() && mp[x-arr[i]]!=i){
	            return true;
	        }
	    }
	    return false;
	   
	}
};
