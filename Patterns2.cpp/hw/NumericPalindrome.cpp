#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        { cout<<" ";

        }
        
        for(int col=0;col<row+1;col++)
        { cout<<col+1;

        }
        // for(int col=0;col<row;col++)
        // {   
        //     cout<<col+1 ;
        // }
        for (int col = row-1; col >= 0; col--) {
           cout << col +1 ;
            }
         
       
        cout<<endl;

    }
    return 0;
}
// #Output
// Enter n: 5
//      1
//     121
//    12321
//   1234321
//  123454321