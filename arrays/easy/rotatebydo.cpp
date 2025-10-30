#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int d;
    cin>>d;

    reverse(arr,0,d-1);
    reverse(arr,d,6-1);
    reverse(arr,0,6-1);

    // reverse(arr,arr+d);
    // reverse(arr+d,arr+6);
    // reverse(arr,arr+6);

    for(int k = 0; k < 6; k++) {
        cout << arr[k] << " ";
    }
}