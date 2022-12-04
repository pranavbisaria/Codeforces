#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for(int i=1; i<n; i++){
            if(s.at(i)=='G' && s.at(i-1)=='B'){
                s.at(i)='B';
                s.at(i-1)='G';
                i++;
            }
        }
    }
    std::cout<<s<<"\n";
}