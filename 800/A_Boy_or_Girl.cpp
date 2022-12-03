#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cin>>str;
    int l = strlen(str), k=1;
    sort(str, str+l);
    for(int i=0; i<l-1; i++){
        if(str[i]!=str[i+1]){
            k++;
        }
    }
    if(k%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }
}