#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1;
    v1.push_back(3);
    v1.emplace_back(9);

    vector<pair<int,int>>v2;
    v2.push_back({1,2});
    v2.emplace_back(4,5);

    vector<int>v3(5,100);

    vector<int> v4(3);

    vector <int> v5(v3);

    vector<int>::iterator it = v1.begin();
    cout<< *(it);

    it++;

    cout<<*(it);

    vector<pair<int,int>>::iterator it1 = v2.begin();
    cout<<(*it1).second;

    for(vector<int>::iterator it3 = v3.begin(); it3!=v3.end();it3++){
        cout<<*(it3)<<" ";
    }

    cout<<endl;

    for(auto it4:v1){
        cout<<it4<<" ";
    }

    v3.erase(v3.begin());
    for(auto it4:v3){
        cout<<it4<<" ";
    }

    v4.erase(v4.begin()+1,v4.begin()+3);

    for(auto it5:v4){
        cout<<it5<<" ";
    }
  
    cout<<endl;
    vector<int>v(2,100);
    v.insert(v.begin(),300);

    cout<<v.size();

    v.clear();
    cout<<endl;
    cout<<v.empty();

    


    



}