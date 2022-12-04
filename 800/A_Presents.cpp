#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int A[T];
    for(int i=0; i<T; i++){
        cin>>A[i];
    }
    for(int i=1; i<=T; i++){
        for(int j=0; j<T; j++){
            if(A[j]==i){
                cout<<j+1<<" ";
            }
        }
    }
    cout<<"\n";
}