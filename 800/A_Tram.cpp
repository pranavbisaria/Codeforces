#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0, cm=0;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>cm) cm=c;
    }
    cout<<cm<<"\n";
}