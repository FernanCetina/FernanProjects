#include <iostream>
using namespace std;
int a[1000][1000];
int n,p,k;
int main(){
    cin>>n;
    k=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            p=p+a[i=j][j=i];


}
    }
    cout<<p;
}