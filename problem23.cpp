#include<iostream>
using namespace std;

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
        int c=i;
        while(j<=n-i+1){
            cout<<c;
            c++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}