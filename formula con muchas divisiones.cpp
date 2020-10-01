#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    cout<<((((pow(x,3) + pow(x,2)))/ (pow(y,2) - y)) - x/y - 5)/(2*x);
}
