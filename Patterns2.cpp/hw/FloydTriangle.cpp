#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=1;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }

    
    return 0;
}

// #Output
// Enter n: 6
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
//  16 17 18 19 20 21