#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int c1, c2;
        c1 = n/3;
        c2 = (2*n/3)/2;
        if(n%3!=0){
            if((n-c1)%2==0){
                c2++;
            }
            else{
                c1++;
            }
        }
        cout<<c1<<" "<<c2<<"\n";
    }
}