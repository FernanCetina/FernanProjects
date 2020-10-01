#include <bits/stdc++.h>
#define mas ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int x,c,d;
string a;
int main(){
    mas;
    getline(cin,a);
    x=a.size();
    for(int i=0;i<x;i++){
            int r=a[i];
        if(r==49){
            c++;
        }
        if(r==50){
            d++;
        }
    }
    cout<<c+d*2;
}