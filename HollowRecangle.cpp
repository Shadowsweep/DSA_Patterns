#include<iostream>
using namespace std;


// int main()
// {
//     for (int i =0;i<=4;i++)
//     {    
    
//         for(int j=0;j<=4;j++)
//         {
//             if(i==0 || i==4 )
//             {
//                 cout<<"* ";
//             }
//             else{
//                 if(j==0 || j==4)
//                 {
//                     cout<<"* ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
                
//             }

//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main()
{  int rows =10;
   int cols = 7;
    for (int row =0;row<rows;row++)
    {    
    
        for(int col=0;col<cols;col++)
        {
            if(row ==0 || row==rows-1 )
            {
                cout<<"* ";
            }
            else{
                if(col==0 || col==cols-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
                
            }

        }
        cout<<endl;
    }
    return 0;
}