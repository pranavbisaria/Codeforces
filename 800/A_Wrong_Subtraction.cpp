#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    while(k--){
        (n%10==0)? n/=10:n--;
    }
    cout<<n<<"\n";
}