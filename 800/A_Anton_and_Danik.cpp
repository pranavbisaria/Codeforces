#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int D = count(s.begin(), s.end(), 'D');
    int A = count(s.begin(), s.end(), 'A');
    if(D>A){
        cout<<"Danik\n";
    } 
    else if(A>D){
        cout<<"Anton\n";
    }
    else{
        cout<<"Friendship\n";
    }
}