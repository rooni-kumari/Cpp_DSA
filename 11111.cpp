#include<iostream>
using namespace std;
int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=5;j>0;j--)
        {
            if(i%2!=0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}