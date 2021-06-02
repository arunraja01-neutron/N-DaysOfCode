#include<iostream>
using namespace std;

void swap(int *arr, int x, int y){

    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;

}
void move_zero(int *arr, int size){

    int a = 0;
    int b = 0;
    while( a<size && b<size ){
        if( arr[a]==0 ){
            a++;
        }
        else{
               swap(arr, a, b);
               a++;
        }
        if( arr[b]!=0 ){
            b++;
        }
        
    }

}

int main(){
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements of array: " << endl;
    for(int i=0; i<size; ++i){
        cin >> arr[i];
    }
    move_zero(arr, size);

    for(int i=0; i<size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}
