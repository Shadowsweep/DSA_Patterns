#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {   char ch = col  + 'A';
            cout<<ch; 
        }
        
        
    

   
//    for (char alphabet=ch;alphabet>'A';){
//     alphabet = alphabet-1;
//        cout<<alphabet;
//    }

   cout<<endl;
    }

    return 0;
}