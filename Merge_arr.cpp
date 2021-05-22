#include<bits/stdc++.h>
using namespace std;

void swap( int *arr, int start, int end){
    int temp= arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int partition(int *a, int start, int end, int size){
    int pivot_index = start;
    int pivot = a[start];

    while( start<end ){

        while( a[start]<=pivot && start < size ){
            start++;
        }

        while( a[end]>pivot && end > 0 ){
            end--;
        }

        if( start<end ){
            swap(a, start, end );
        }
        swap(a, end, pivot_index);

    }

    return end;
}

void quicksort(int *arr, int start, int end, int size){

    if( start < end){
        int pi = partition( arr, start, end, size);
        quicksort( arr, start, pi-1, size);
        quicksort( arr, pi+1, end, size);
    }

}

bool b_search(int *arr, int find, int size){
    int l=0, r=size-1;
    while( l<=r ){
        int mid = (l+r)/2;
        if( arr[mid]==find ){
            return true;
        }
        else if( arr[mid]<find ){
            l= mid+1;
        }
        else{
            r = mid-1;
        }
    }

    return false;

}

int main(){

    int arr_size, brr_size;
    cout << "Enter first array size: " << endl;
    cin >> arr_size;
    int *arr = new int[arr_size];
    
    cout << "Enter first array elements: " << endl;
    for(int i=0; i<arr_size; ++i){
        cin >> arr[i];
    }
    cout << "Enter second array size: " << endl;
    cin >> brr_size;
    int *brr = new int[brr_size];
    cout << "Enter second array elements: " << endl;
    for(int i=0; i<brr_size; ++i){
        cin >> brr[i];
    }
    
    // quicksort( arr, 0, arr_size-1, arr_size);
    // for(int i=0; i<arr_size; ++i){
    //     cout << arr[i] << " ";
    // }
    vector<int> res;
    if( arr_size > brr_size ){
        quicksort( brr, 0, brr_size-1, brr_size);
        for(int i=0; i<arr_size; ++i){
            if( !b_search(brr, arr[i], brr_size)){
                res.push_back(arr[i]);
                //res_size++;
            }
        }
        for(int i=0; i<brr_size; ++i){
            res.push_back(brr[i]);
            //res_size++;
        }

    }
    else{
        quicksort( arr, 0, arr_size-1, arr_size);
        for(int i=0; i<brr_size; ++i){
            if( !b_search(arr, brr[i], arr_size)){
                res.push_back(brr[i]);
                //res_size++;
            }
        }
        for(int i=0; i<arr_size; ++i){
            res.push_back(arr[i]);
            //res_size++;
        }
    }

    for(int i=0; i<res.size(); ++i){
        cout << res[i] << " ";
    }
    
    return 0;

}

