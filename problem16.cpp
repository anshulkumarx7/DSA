#include<iostream>
using namespace std;
// A
// B C
// D E F
// G H I J
int main(){
    int i=1,j,n;
    cin>>n;
    char ch='A';
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}