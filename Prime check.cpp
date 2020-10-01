#include <iostream>
using namespace std;
int main(){
   int a=0,i,n;
         cin>>n;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a==2){
              cout<<"Si";
            }else{
                cout<<"No";
         }
    return 0;
}