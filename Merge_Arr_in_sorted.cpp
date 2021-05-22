#include<iostream>
using namespace std;

void bubble_sort( int *arr, int size){

    for(int i=0; i<size-1; ++i){
        for(int j=0; j<size-i-1; ++j){
            if( arr[j]>arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

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

    bubble_sort( arr, arr_size);
    bubble_sort( brr, brr_size);

    int i=0, j=0;


    int *res = new int[arr_size+brr_size];
    int size=0;
    
    while( i<=arr_size || j<=brr_size ){
        if( arr[i] == brr[j] ){
            res[size] = arr[i];
            size++;
            res[size] = brr[j];
            size++;
            i++;
            j++;
        }
        else if( arr[i] < brr[j] ){
            res[size] = arr[i];
            i++;
            size++;
        }
        else if( arr[i] > brr[j] ){
            res[size] = brr[j];
            j++;
            size++;
        }
        // else if( i>=arr_size ){
        //     for(int x=j; x<brr_size; ++x){
        //         res[size] = brr[x];
        //         size++;
        //     }
        //     break;
        // }
        // else if( j>=brr_size ){
        //     for(int x=i; x<arr_size; ++x){
        //         res[size] = arr[x];
        //         size++;
        //     }
        //     break;
        // }
    }


    for(int d=0; d< (arr_size+brr_size); ++d){
        cout << res[d] << " ";
    }

    return 0;


}
