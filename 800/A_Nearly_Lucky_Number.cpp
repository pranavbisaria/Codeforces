#include<bits/stdc++.h>
using namespace std;
bool check_lucky(int n){
    if(n==0) return 0;
    else
    while(n>0){
        int t = n%10;
        if(t!=4 && t!=7){
            return 0;
        }
        n/=10;
    }
        return 1;

}
int main(){
    long long int n;
    int ln=0;
    cin>>n;
    while(n>0){
        int t = n%10;
        if(t==4 || t==7){
            ln++;
        }
        n/=10;
    }
    if(check_lucky(ln)) cout<<"YES\n";
    else cout<<"NO\n";
    
}