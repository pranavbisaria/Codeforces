#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[1000];
    cin>>str;
    int l = strlen(str), n = (l/2)+1, k=n-1;
    sort(str, str+l);
    for(int i=0; i<l; i++){
        if(i%2==0){
            cout<<str[k];
            k++;
        }
        else cout<<"+";
    }
    cout<<"\n";
}