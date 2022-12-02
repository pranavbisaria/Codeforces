#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0, T;
    cin>>T;
    for(int i=0; i<T; i++){
        string opr;
        cin>>opr;
        if((opr=="++X") || (opr=="X++")){
            x++;
        }
        else if((opr=="--X") || opr=="X--"){
            x--;
        }
    }
    cout<<x<<"\n";
}