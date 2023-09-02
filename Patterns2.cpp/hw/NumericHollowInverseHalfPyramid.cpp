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
        {  if(row==0 )
          {
            cout<<col+1;
          }
           else
           { if(col==0  )
             {
            cout<<row+1;
            }
            else{
                if(col==n-row-1)
                {cout<<n;}
                else
                {
                    cout<<" ";
                }
            }
           }
    
        }


        cout<<endl;
    }

    return 0;
}
// #output
// Enter n: 5
// 12345
// 2  5
// 3 5
// 45
// 5