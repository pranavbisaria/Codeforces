#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int A[4], r=4;
        cin>>A[0]>>A[1];
        cin>>A[2]>>A[3];
        while(r){
            if(A[0]<A[2] && A[1]<A[3] && A[0]<A[1] && A[2]<A[3]){
                cout<<"YES\n";
                break;
            }
            else{
                int temp = A[0];
                A[0] = A[2];
                A[2] = A[3];
                A[3] = A[1];
                A[1] = temp;
                r--;
            }
        }
        if(r==0){
            cout<<"NO\n";
        }
    }
}