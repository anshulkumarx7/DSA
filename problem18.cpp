#include<iostream>
using namespace std;
// E 
// D E 
// C D E
// B C D E
// A B C D E
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        char ch='A'+n-i;
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