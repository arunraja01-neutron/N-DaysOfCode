#include<iostream>
using namespace std;

void get_result(int *arr, int size){
    cout << endl;
    for(int i=0; i<size; ++i){
        if(i==0){
            if(arr[i]!=arr[i+1]) cout << arr[i] << " ";
        }
        else if(i==size-1){
            if(arr[i]!=arr[i-1]) cout << arr[i] << " ";
        }
        else{
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                cout << arr[i] << " ";
            }
        }
    }
}

void swap(int *arr, int a, int b){

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

}

int partition(int *arr, int start, int end, int size){

    int pivot = arr[start];
    int pivot_index = start;
    while( start<end ){
        while( arr[start]<=pivot && start<size ) start++;
        while( arr[end]>pivot ) end--;
        if( start < end){
            swap(arr, start, end);
        }
        swap(arr, end, pivot_index);
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

    int size=0, *arr=new int;
    char c;
    while( scanf("%d%c",&arr[size],&c) && c!='\n'){
        ++size;
    }
    size++;
    quick_sort(arr, 0, size-1, size);
    get_result(arr,size);
    return 0;

}
