#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(1){
        n++;
        int a = (n%10), b =((n/10) %10), c= ((n/100) %10), d = (n/1000);
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            break;
        }
    }
    cout<<n<<"\n";
}