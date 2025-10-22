#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,2,4,5};
    int n = 5;

    int xor1= 0;
    int xor2 = 0;

    for(int i=0;i<n-1;i++){
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ i+1;

    }   

    xor2 = xor2 ^ n;

    int xor3 = xor1 ^ xor2;

    cout<<"missing no. "<< xor3;

}