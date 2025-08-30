#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<cnt;

    long long num1 = 2747572154715136;
    int cnt1 = __builtin_popcountll(num1); 
    cout<<" "<<cnt1;

    string s = "231";
    sort(s.begin(),s.end());
    cout<<" "<<s;

    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));
}

