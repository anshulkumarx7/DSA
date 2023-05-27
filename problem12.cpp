#include<iostream>
using namespace std;
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        char ch='A';
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