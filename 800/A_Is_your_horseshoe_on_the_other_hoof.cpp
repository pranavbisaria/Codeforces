#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[4];
    for(int i=0; i<4; i++){
        cin>>A[i];
    }
    sort(A, A+4);
    int b=0;
    for(int i=0; i<3; i++){
        if(A[i]==A[i+1]) b++;
    }
    cout<<b<<"\n";
}