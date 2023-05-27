#include<iostream>
using namespace std;
// A
// B B
// C C C
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<char('A'+i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}