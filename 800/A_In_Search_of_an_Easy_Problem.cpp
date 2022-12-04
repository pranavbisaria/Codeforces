#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, m=0;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        if(k==1){
            cout<<"HARD\n";
            m=1;
            break;
        }    
    }
    if(m==0){
        cout<<"EASY\n";
    }
}