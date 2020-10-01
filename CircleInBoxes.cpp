#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int x[2010];
int main(){

    cin>>a;
  for(int i=0;i<2*a;i++){
         cin>>x[i];
     }

        for(int i=0;i<2*a;i+=2){
        b=x[i];
        c=x[i+1];

        cout<<(c+b)*2+1<<" "<<c*2+1<<endl;


    }
        return 0;

}
