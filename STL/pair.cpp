#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p= {1,3};
    cout<<p.first<<" "<<p.second;

    cout<<endl;

    pair<int,pair<int,int>>p2 = {1,{2,3}};
    cout<<p2.second.first;

    cout<< endl;

    pair<int,int> arr[] = {{1,2},{1,3},{5,6}};
    cout<< arr[2].second;
}