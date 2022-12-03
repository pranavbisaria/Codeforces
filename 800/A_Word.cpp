#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; 
    int u=0, l=0;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        isupper(str.at(i))? u++: l++;
    }
    if(u>l){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str;
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
    }
}