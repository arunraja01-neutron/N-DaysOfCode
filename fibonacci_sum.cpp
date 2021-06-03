#include<iostream>
//using namespace std;

int set_fibb_arr(int *arr, int n){
    int a=0, b=1, c, sizee=0;
    for(int i=0; i<n; ++i){
        c = a+b;
        if( c>=n ) break;
        a=b;
        b=c;
        arr[i] = c;
        sizee++;
        
    }
    return sizee;
}

int main(){

    int n = 13;
    int arr[4] = {2,4,9,12};
    int size=4;
    //int sizee = set_fibb_arr(arr, n);
    int a = sizee-1, b=sizee-1;//, sum=arr[a];

    while( a>=0 && b>=0 ){
        if( sum==n ) break;
        if( (sum+arr[b])<=n  ){
            cout << "+" << arr[b];
            sum+=arr[b];
            a=b;
        }
        b--;
    }
    return 0;

}

// 50 - > 1 1 2 3 5 8 13 21 34
                b   a      

// 64 - > 1 2 3 5 8 13 21 34 55 

// sum =  {1, 9, 4, 12}
        //1, 4, 9, 12
                    a
            //22

