#include<iostream>
using namespace std;


int main()
{   
    int n;
    cout<<"Enter n :";
    cin>>n;

    for(int row=1;row<=n;row++)
      {
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<col;
        }
        cout<<endl;
      }
    return 0;
}

// Output:
// Enter n :5
// 12345
// 1234
// 123
// 12
// 1