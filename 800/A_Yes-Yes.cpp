#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    char c[3] = {'Y', 'e', 's'};
    while(T--){
        int flag =0, k=0;
        char s[50];
        cin>>s;
        int n = strlen(s);

        if(s[0]=='Y') k=0;
        else if(s[0] == 'e') k=1;
        else k=2;

        for(int i=0; i<n; i++){

            if(c[k]!=s[i]){
                flag = 1;
                break;
            }
            k++;
            if(k==3) k=0;
        }
        if(flag == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}