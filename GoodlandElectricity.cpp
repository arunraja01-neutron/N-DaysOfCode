    int result = 0;
    
    // start from the beginning and find the furthest city to build the plant
    int i = 0;
    while (i < arr.size()) {
        // cout << i << endl;
        // do backward search from the furthest possible to current
        bool found = false;
        for (int j = i + k-1; (j >= i - k+1) && (j >= 0); j--) {
            // cout << " " << j << endl;
            if (j < arr.size()){
                if (arr[j] == 1) {
                    // cout << " = " << j << endl;
                    // put plant here and 
                    result++;
                    // calculate the new beginning
                    i = j + k;
                    found = true;
                    break;
                }
            }
        }
        
        if (!found) return -1;
