#include<iostream>
using namespace std;
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<j<<" ";
            j+=1;

        }
        cout<<endl;
        i+=1;
    }
    return 0;
}