#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, N=0;
    cin>>T;
    while(T--){
        int p, v, t;
        cin>>p>>v>>t;
        if(p&v || v&t || p&t){
            N++;
        }
    }
    cout<<N<<"\n";
}