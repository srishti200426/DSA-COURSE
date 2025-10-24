#include <bits/stdc++.h>
using namespace std;

bool is_sorted(){
    int arr[6]={1,2,3,4,5,7};
    for(int i = 0;i<5;i++){ 
        if(arr[i]>arr[i+1]){
            return false;

        }

        

        
    }

    return true;

    
}

int main(){

    cout<<is_sorted();
    
}