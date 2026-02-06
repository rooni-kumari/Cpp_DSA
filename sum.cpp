#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},sum=0;
    for(int num : arr)
    {
        sum=sum+ num;
    }
    cout<<sum<<endl;
    return 0;
}