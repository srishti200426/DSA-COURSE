#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int num){
    for(int i=0;i<7;i++){
        if(arr[i] == num){
            return i;
        }
        
    }

    return -1;



}

int main(){
    int arr[7] = {1,2,3,4,4,5,6};
    int num = 10;

    cout<<linear_search(arr,num);

    

    
}