#include <bits/stdc++.h>
#define mas ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int x,y,g,f;
string a,b;
int main(){
    mas;
    cin>>a>>b;
    x=a.size();
    y=b.size();
    for(int i=0;i<x;i++){
        g=g+a[i];
    }
    for(int i=0;i<x;i++){
        f=f+b[i];
    }
    if(g==f){
        cout<<"ANAGRAMA!";
    }else{
        cout<<"No :(";
    }
}