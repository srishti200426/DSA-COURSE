#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,2,4,7,7,5};
    int largest = a[0];
    for(int i =0;i<6;i++){
        if(a[i]>largest){
            largest = a[i];
        }


    }

    int slargest = -1;

    for(int i = 0;i<6;i++){
        if(slargest<a[i] && a[i]!=largest){
            slargest = a[i];
        }
    }

    cout<<slargest;

}