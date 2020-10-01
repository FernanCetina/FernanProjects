#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;

    cin>>a>>b>>c;

    if(a*b<=c){
        cout<<0<<" "<<0;
    }

    if(a*b>c){
        cout<<a*b-c<<" "<<c%b;
    }
}
