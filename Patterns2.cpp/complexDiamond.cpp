#include<iostream>
using namespace std;


int main()
{
    int num;
    cout<<"Enter n: ";
    cin>>num;
    int n = num/2;

    for(int row =0;row<n;row++)
    {
        for(int col =0;col<n-row;col++)
        {
            cout<<"*";
        }
        for(int col =0;col<2*row+1;col++)
        {
            cout<<" ";
        }
        for(int col =0;col<n-row;col++)
        {
            cout<<"*";
        }

        cout<<endl;

        
    }

    for(int row =0;row<n;row++)
    {
        for(int col =0;col<row+1;col++)
        {
            cout<<"*";
        }
        for(int col =0;col<2*n -2*row-1;col++)
        {
            cout<<" ";
        }
        for(int col =0;col<row+1;col++)
        {
            cout<<"*";
        }

        cout<<endl;

        
    }
    return 0;
}

// #Output
// Enter n: 8
// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****