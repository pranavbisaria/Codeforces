#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, count=0;
    cin>>T;
    int A[T];
    for(int i=0; i<T; i++){
        cin>>A[i];
    }
    for(int i=0; i<T; i++){
        if(A[i]!=A[i+1]){
            count++;
        }
    }
    cout<<count<<"\n";
}