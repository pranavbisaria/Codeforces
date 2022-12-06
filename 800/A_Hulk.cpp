#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        if(i!=0) cout<<"that ";
        if(i%2==0){
            cout<<"I hate ";
        }
        else cout<<"I love ";
    }
    cout<<"it";
}