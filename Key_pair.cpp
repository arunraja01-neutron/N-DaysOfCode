class Solution {
    boolean hasArrayTwoCandidates(int arr[], int n, int x) {
        Hashtable<Integer, Integer>  h = new Hashtable<>();
        for(int i=0; i<arr.length; ++i){
            //System.out.println("insert reperititon");
            h.put(arr[i], i);
            
        }
        for(int i=0; i<arr.length; ++i){
            //h.put(i, h.get(i)-1);
            if(h.containsKey(x-arr[i]) && h.get(x-arr[i])!=i ){
            
                return true;
                
            }
            
        }
        
        return false;
    }
}
