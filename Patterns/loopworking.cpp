#include<iostream>
using namespace std;


int main()
{
    // This is how loop will work fisrst start from outer loop 
    // then continue with inner loop
    for( int i = 1 ;i<=5;i++)
    {
        cout<<"Outer Loop"<<"  "<<i<<endl;
        
        
        for(int j=1;j<=5;j++)
        {
            cout<<"Inner Loop"<<"  "<<j<<endl;
            
        }
    }
    return 0;
}