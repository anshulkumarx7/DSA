#include<iostream>
using namespace std;
// 1
// 2 3
// 3 4 5
// 4 5 6 7
int main(){
    int i=1,j,n,c;
    cin>>n;
    while(i<=n){
        c=i;
        j=1;
        while(j<=i){
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}