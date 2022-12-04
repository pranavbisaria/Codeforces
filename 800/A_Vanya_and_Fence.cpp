#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h, w;
    cin>>n>>h;
    w=n;
    while(n--){
        int k;
        cin>>k;
        if(k>h){
            w++;
        }
    }
    cout<<w<<"\n";
}