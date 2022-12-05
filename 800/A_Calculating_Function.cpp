#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T, a=0;
    cin>>T;
    if(T%2==0) a=T/2;
    else a= (T+1)/(-2);
    cout<<a<<"\n";
}