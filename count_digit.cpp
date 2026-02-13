// WAP Count Digits of a Number //

#include<iostream>
using namespace std;
int main()
{
    int a = 1234;
    int count=0;
    cout<<"count before"<<endl;
    while(a!=0)
    {
        a/=10;
        count++;        
    }
    cout<<"count"<<endl;
    cout<<count<<endl;
    return 0;    
}
