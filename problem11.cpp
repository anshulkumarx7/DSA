#include<iostream>
using namespace std;
// A A A A
// B B B B
// C C C C
// D D D D
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        char ch='A';
        while(j<=n){
            cout<<char(ch+i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}