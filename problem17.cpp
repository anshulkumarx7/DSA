#include<iostream>
using namespace std;
// A
// B C
// C D E
// D E F G
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
            
        char ch='A'+i-1;
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