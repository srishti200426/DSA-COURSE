#include<bits/stdc++.h>
using namespace std;

int main(){

    //sorted,not unique

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout<<ms.count(1)<<" ";

    ms.erase(ms.find(1));

    cout<<ms.empty()<<endl;



    ms.erase(1);

    cout<<ms.empty();


}