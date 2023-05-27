#include<iostream>
using namespace std;
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}