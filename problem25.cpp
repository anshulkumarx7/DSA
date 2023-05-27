#include<iostream>
using namespace std;
//     1
//    121
//   12321
//  1234321
// 123454321
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        j=1;
        int c=i-1;
        while(j<=i-1){
            cout<<c;
            c--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}