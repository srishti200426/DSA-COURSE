#include <bits/stdc++.h>
using namespace std;

int main(){
    int xor1 = 0;
    int arr[7] = {1,1,2,3,3,4,4};
    for(int i=0;i<7;i++){
        xor1 = xor1 ^ arr[i];
    }

    cout<<xor1;
}