#include<iostream>
using namespace std;

int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}