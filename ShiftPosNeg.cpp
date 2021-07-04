#include<iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    int size;
    cout << "ENTER SIZE: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; ++i){
        cout << "ENTER ARRAY ELEMENT: ";
        cin >> arr[i];
    }
    int i=0, j=1;
    while( i<size && j<size ){
        if(arr[i]<0) ++i;
        if(arr[j]>=0) ++j;
        if(arr[j]<0){
            swap(arr, i, j);
            ++j;
        }
    }
    cout << endl;
    cout << "MODIFIED ARRAY IS " << endl;
    for(int x=0; x<size; ++x){
        cout << arr[x] << endl;
    }
    return 0;
}
