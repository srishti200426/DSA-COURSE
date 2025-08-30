#include<bits/stdc++.h>
using namespace std;
//unique keys ,sorted order
int main(){
    map<int,int> mpp;

    mpp[1] =2;
    mpp.emplace(2,3);
    mpp.insert({4,4});

    for(auto it:mpp){
        cout<<it.first<<" ";
        cout<<it.second<<" ";
        cout<<endl;

        
    }

    cout<<mpp[1]<<endl;

    auto it=mpp.find(3);
    cout<<(*it).second<<endl;

   auto it1 = mpp.upper_bound(2);
   auto it2 = mpp.lower_bound(2);

   cout<<(*it1).first<<" ";
   cout<<(*it2).first<<" ";

    
}