#include<bits/stdc++.h>
using namespace std;

int main(){
    //stored sorted unique values
    set<int>st;

    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    cout<<*st.begin()<<" ";

    // st.erase(1);

    // cout<<*st.begin()<<" ";

    int cnt = st.count(2);
    cout<<cnt<<" ";

    auto it1 = st.find(1);
    auto it2 = st.find(3);
    st.erase(it1,it2);

    cout<<*st.begin()<<" ";



    
}