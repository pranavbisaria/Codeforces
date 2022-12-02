#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, N=0;
    cin>>n>>k;
    int A[n];
    for(int i=1; i<=n; i++){
        cin>>A[i];
    }
    for(int i=1; i<=n; i++){
        if(A[i]>=A[k] && A[i]>0){
            N++;
        }
    }
    cout<<N<<"\n";
}