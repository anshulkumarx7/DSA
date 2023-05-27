#include<iostream>
using namespace std;
// A B C D 
// E F G H 
// I J K L 
// M N O P
int main(){
    int i=1,j,n;
    cin>>n;
    char ch='A';
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}