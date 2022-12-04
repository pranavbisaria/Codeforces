#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, n=0;
    cin>>T;
    while(T--){
        int p, q;
        cin>>p>>q;
        if(q-p>=2) n++; 
    }
    cout<<n<<"\n";
}