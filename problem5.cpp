#include<iostream>
using namespace std;
// 1  2  3
// 4  5  6
// 7  8  9
int main(){
    int i=1,j,n;
    cin>>n;
    int count=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<"  ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}