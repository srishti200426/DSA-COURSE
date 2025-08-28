#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <int> q;

    q.push(2);
    q.emplace(90);
    q.push(5);
    
    cout<<q.back()<<" ";

    q.back() += 5;
    cout<<q.back()<<" ";

    cout<<q.front()<<" ";

    q.pop();

    cout<<q.front();

}


