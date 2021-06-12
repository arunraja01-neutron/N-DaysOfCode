#include<bits/stdc++.h>
using namespace std;

void swap(int *arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int *arr, int start, int end, int size){
    int pivot = arr[start];
    int pivot_ind = start;
    while( start<end ){
        while( arr[start]<=pivot && start<size ) start++;
        while( arr[end]>pivot ) end--;
        if(start<end) swap(arr, start, end);
        swap(arr, end, pivot_ind);
    }
    return end;
}

void quick_sort(int *arr, int start, int end, int size){
    if(start<end){
        int pi = partition(arr, start, end, size);
        quick_sort(arr, start, pi-1, size);
        quick_sort(arr, pi+1, end, size);
    }
}

int main(){
    int n;
    cin >> n;
    int arr_size = n-1;
    int *arr = new int[arr_size];
    for(int i=0; i<arr_size; ++i){
        cin >> arr[i];
    }
    quick_sort(arr, 0, arr_size-1, arr_size);
    int count=0;
    for(int i=0; i<arr_size; ++i){
        count++;
        if(i==arr_size-1 && count%2!=0){
            cout << arr[i];
            break;
        }
        if(arr[i]!=arr[i+1]){
            if(count%2!=0){
                cout << arr[i];
                break;
            }
            else{
                count=0;
            }
        }

    }
    return 0;
}
