#include <bits/stdc++.h>
using namespace std;

void f(int fact,int num){
    if (num == 1){ 
        cout<<fact;
        return;

    }
    else{
        f(fact*num,num-1);
    }

}
int main(){
    int n;
    cin>>n;
    f(1,n);
}