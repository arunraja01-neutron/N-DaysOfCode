class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
            unordered_map<int, int> um;
    int curr_sum = 0;
 
    // Traverse original array and compute cumulative
    // sum and increase count by 1 for this sum
    // in 'um'. Adds '-1' when arr[i] == 0
    for (int i = 0; i < n; i++) {
        if(arr[i]==0) curr_sum+=(-1);
        else curr_sum+=arr[i];
        um[curr_sum]++;
    }
    long long count = 0;
    // traverse the hash table 'um'
    for (auto itr = um.begin(); itr != um.end(); itr++) {
 
        // If there are more than one prefix subarrays
        // with a particular sum
        if (itr->second > 1)
            count += ((itr->second * (itr->second - 1)) / 2);
    }
 
    // add the subarrays starting from 1st element and
    // have equal number of 1's and 0's
    if (um.find(0) != um.end())
        count += um[0];
 
    // required count of subarrays
    return count;
    }
};
