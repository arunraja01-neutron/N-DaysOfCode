#include<stdio.h>
#include<stdlib.h>

void main(){
    long long N = 11;
    long long res=0, p=1;
    while( N>0 ){
        res+=(p*(N%9));
        N/=9;
        p*=10;
    }
    printf("%d", res);
}


