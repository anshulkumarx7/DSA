#include<iostream>
using namespace std;
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
int main(){
    int i=1,j,n;
    cin>>n;
    while (i<=n){
        j=1;;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        j=1;
        while(j<=(i-1)*2){
            cout<<"*";
            j++;
        }
        j=1;
        int c=n-i+1;
        while(j<=n-i+1){
            cout<<c;
            c--;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}