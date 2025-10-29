#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int d;
    cin>>d;

    d= d%6;
    int temp[d];
    //step 1 adding to temp
    for (int i=0;i<d;i++){
        temp[i] = arr[i];

    }
    //step 2 shifting elements
    for(int i=d;i<6;i++){
        arr[i-d] = arr[i];
    }

    //step 3 adding temp variables back

    for(int i = 6-d;i<6;i++){
        arr[i] = temp[i-(6-d)];
    }

    for(int k = 0; k < 6; k++) {
        cout << arr[k] << " ";
    }
}