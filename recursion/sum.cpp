#include <bits/stdc++.h>
using namespace std;
//parametrized way
void f(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }

    else{
        f(i-1,sum+i);
    }

}
//functional way

int f1(int n){
    if(n==0)return 0;
    else 
    return n+f1(n-1);


}

int main(){
    int n;
    cin>>n;
    f(n,0);
    cout<<endl;
    cout<<f1(n);
}