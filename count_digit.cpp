// WAP Count Digits of a Number //

#include<iostream>
using namespace std;
int main()
{
    int a = 5432;
    int count=0;
    
    while(a!=0)
    {
        a/=10;
        count++;        
    }
    
    cout<<"number of digit are "<<count<<endl;
    return 0;    
}
