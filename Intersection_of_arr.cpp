class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        vector<int> arr;
        vector<int> brr;
        set<int> s;
        set<int> d;
        for(int i=0; i<n; ++i){
            s.insert(a[i]);
        }
        for(int i=0; i<m; ++i){
            d.insert(b[i]);
        }
        set<int>::iterator it;
        for(it=s.begin(); it!=s.end(); ++it){
            arr.push_back(*it);
        }
        for(it=d.begin(); it!=d.end(); ++it){
            brr.push_back(*it);
        }
        int c=0;
        if( arr.size()>brr.size() ){
            //sort(a, a+n);
            for(int i=0; i<brr.size(); ++i){
                if( binary_search(arr.begin(), arr.end(), brr[i]) ){
                    c++;
                }
            }
        }
        else{
            //sort(b, b+m);
            for(int i=0; i<arr.size(); ++i){
                if( binary_search(brr.begin(), brr.end(), arr[i]) ){
                    c++;
                }
            }
        }
        return c;
    }
    
};
