#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},multi=1;
    for(int num : arr)
    {
        multi*= num;
    }
    cout<<multi<<endl;
    return 0;
}