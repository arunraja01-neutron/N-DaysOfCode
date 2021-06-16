class Solution {
    int findMaximum(int[] arr, int n) {
        int i=0;
        while( i<n-1 ){
            if(arr[i]>arr[i+1]) return arr[i];
            ++i;
        }
        return arr[n-1];
    }
}
