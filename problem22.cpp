#include<iostream>
using namespace std;
// 1111
//  222
//   33
//    4
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i-1){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}