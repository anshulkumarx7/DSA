#include <iostream>
using namespace std;
// * * * *
// * * *
// * *
// *
int main()
{
    int i = 1, j, n;
    cin >> n;
    int c = n;
    while (i <= n)
    {
        j = 1;
        while (j <= c)
        {
            cout<<"*"<<" ";
            j++;
        }
        c--;
        cout<<endl;
        i++;
    }
    return 0;
}