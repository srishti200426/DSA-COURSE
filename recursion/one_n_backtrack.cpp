#include <bits/stdc++.h>
using namespace std;

void f(int i,int n){

    if(i<=0){
        return;
    }

    else{
        f(i-1,n);
        cout<<i<<endl;
    }


}
int main(){
    int n;
    cin>>n;
    f(n,n);
}