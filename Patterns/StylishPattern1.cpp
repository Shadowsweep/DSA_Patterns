#include<iostream>
using namespace std;


int main()
{
    int n ;
    cout<<"Enetr n : ";
    cin>>n;
    for (int row=0;row<n;row++)
    {
        for(int col=0;col<2*row +1;row++)
        {
            if(col%2==1){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
         cout<<endl;
        }
       
    

    return 0;
}