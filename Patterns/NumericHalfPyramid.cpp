#include<iostream>
using namespace std;


int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<row +1;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}

// Output:
// 1
// 12
// 123
// 1234
// 12345