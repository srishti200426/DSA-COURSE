#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(9);

    st.emplace(3);
    st.emplace(7);
    st.emplace(2);

    cout<<st.top();

    st.pop();

    cout<<st.top();

    cout<< st.size();

    cout<< st.empty();

    


}
