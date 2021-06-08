class Solution {
    public boolean binary_search(char search, char[] find_in){
        int l=0, r = find_in.length-1;
        while( l<=r ){
            int mid = (l+r)/2;
            if( find_in[mid]==search ){
                return true;
            }
            else if( find_in[mid]<search ){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        
        }
        return false;
    }
    public boolean checkIfPangram(String sentence) {
        //sort(s.begin(),s.end());
        //cout << s;
        char c;
        char arr[] = sentence.toCharArray();
        Arrays.sort(arr);
        int t=26, alp = 97;
        while( t>0 ){
            c = (char)alp;
            //cout << c << " ";
            if( binary_search(c,arr)==false ) return false;
            alp++;
            t--;
        }
        return true;
    }
}
