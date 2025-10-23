#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1[7]={1,2,2,3,3,4,6};
    int a2[7]={2,3,3,5,6,6,7};

    int i=0;
    int j=0;
    vector <int> inter;

    while(i<7 && j<7){
        if(a1[i]>=a2[j] && a1[i] == a2[j]){
            inter.push_back(a1[i]);
            i++;
            j++;
        }

        else if(a1[i]>=a2[j] && a1[i] != a2[j] ){
            j++;

        }

        else{
            i++;
        }
    }

    for(auto it: inter){
        cout<< it<<" ";
    }
}