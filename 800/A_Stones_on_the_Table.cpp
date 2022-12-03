#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, r=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.length()-1; i++){
        if(s.at(i)==s.at(i+1)){
            r++;
        }
    }
    cout<<r<<"\n";
}