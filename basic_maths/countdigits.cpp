#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        count+=1;
        n=n/10;
    }
    cout<<count<<endl;

    //or

    int m;
    cin>>m;

    int cnt = (int)(log10(m)+1);
    cout<<cnt;
}



