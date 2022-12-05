#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    float p[T], m=0;
    for(int i=0; i<T; i++){
        cin>>fixed>>setprecision(12)>>p[i];
        m += p[i]/100;
    }
    printf("%.12f", (m/T)*100);    
}