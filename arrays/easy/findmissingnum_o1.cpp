#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {1,2,4,5};
    int sum2 = 0;

    int sum1 = (n*(n+1))/2;

    for(int i = 0; i<n-1 ;i++){
        sum2 += arr[i];
    }

    cout<<"missing no. "<< sum1-sum2;
    
}