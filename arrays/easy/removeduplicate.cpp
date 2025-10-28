#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {1,1,2,2,2,3,3};
    int i = 0;
    for(int j = 1;j<7;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    int newSize = i + 1; // number of unique elements

    cout << "After removing duplicates: ";
    for(int k = 0; k < newSize; k++) {
        cout << arr[k] << " ";
    }
    cout << "\n";

    return 0;
}

