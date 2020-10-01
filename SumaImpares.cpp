#include <iostream>
using namespace std;
int main(){
    int a,b,c=0,n;
    string data[2000];
    cin>>n;
    for(int j=1;j<=n;j++){
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            c=c+i;
            data[j]=c;
        }
    }
    }

    for(int j=1;j<=n;j++){
        cout<<data[j]<<endl;
    }

    return 0;
}
