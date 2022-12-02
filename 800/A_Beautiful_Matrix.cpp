#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0, j=0, k, r;
    for(i=5; i>0; i--){
        for(j=1; j<=5; j++){
            cin>>k;
            if(k==1){
                r = abs(3-i)+abs(3-j);
                break;
            }
        }
    }
    cout<<r<<"\n";
}