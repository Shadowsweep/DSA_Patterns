#include<iostream>
using namespace std;


int main()
{
    int num ;
    cout<<"Enter n: ";
    cin>>num;
    int n = num/2;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        for(int col =0;col<row+1;col++)
        {
          if(col==0 || col== row +1-1)
          {
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
        for(int row=0;row<n;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        int totalCol = n-row;
        for(int col=0;col<totalCol;col++)
        {  
              if(col==0 ||col==totalCol-1)
              {  
                cout<< "* ";
              }
              else{

                cout<<"  ";
                   }
        }
        cout<<endl;
       
    }

    return 0;
}
// #Output 
// Enter n: 8
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *