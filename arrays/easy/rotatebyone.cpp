#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,5,6};

    int temp = a[0];

    for(int i = 0; i < 6; i++){
        a[i] = a[i+1];
    }

    a[5] = temp;

    for(int k = 0; k < 6; k++) {
        cout << a[k] << " ";
    }
}