#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"after bubble sort\n";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


}

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubblesort(arr, n);
    return 0;
}