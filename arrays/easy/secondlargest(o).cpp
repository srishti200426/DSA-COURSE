#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={1,2,4,7,7,5};
    int largest = a[0];
    int slargest = -1;

    for(int i =1;i<6;i++){
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }

        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];

        }
    }

    cout<< slargest;
}