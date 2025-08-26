#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls ;
    ls.emplace_back(2);
    ls.push_back(5);
    ls.push_front(6);
    ls.push_back(10);
    ls.push_back(1);

    // list<int>::iterator it = ls.begin();

    for(auto it = ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }


}

//rest functions same as vectors