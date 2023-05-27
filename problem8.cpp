#include<iostream>
using namespace std;
// 1
// 2 3
// 4 5 6
// 7 8 9 10
int main(){
    int i=1,j,n,count=1;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count++<<" ";
            j+=1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}