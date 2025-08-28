#include <bits/stdc++.h>
using namespace std;

int main(){

    //maximum heap

    priority_queue<int> pq;
    pq.push(1);
    pq.push(11);
    pq.emplace(5);
    pq.emplace(10);
    
    cout<<pq.top()<<" ";

    //minimum heap

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(8);
    pq1.push(2);
    pq1.push(5);
    pq1.push(1);

    cout<<pq1.top();

    

    






}