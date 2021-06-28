class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pi = partition(arr,low, high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int pivot_index = low;
       while( low<high ){
           while( arr[low]<=pivot && low<high+1) low++;
           while( arr[high]>pivot ) high--;
           if(low<high){
               int temp = arr[low];
               arr[low] = arr[high];
               arr[high] = temp;
           }
       }
    int temp = arr[high];
    arr[high] = arr[pivot_index];
    arr[pivot_index] = temp;
    return high; 
    }
};
