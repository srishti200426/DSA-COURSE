#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<2*n-1;i++){
        
        if(i<=((2*n)-1)/2){
            //stars
            for(int j=0;j<=i;j++){
                cout<<"*";
            }   

            //spaces
            for(int j=0;j<(2*n)-(2*i)-2;j++){
                cout<<" ";
            }

            //stars
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

        else{

            //stars

            for(int j=0;j<2*n-i-1;j++){
                cout<<"*";
            }

            //spaces

            for(int j=0;j<(2*i)-(2*n)+2;j++){
                cout<<" ";
            }

            //stars

            for(int j=0;j<(2*n)-i-1;j++){
                cout<<"*";
            }
            cout<<endl;


        }
    }
}