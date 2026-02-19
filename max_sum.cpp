#include<iostream>
using namespace std;
int main()
{
    int max=0;
    int index;
    int arr[]={123,456,732,813,578,999};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size_arr;i++)
    {
        int num=arr[i];
        int sum=0;
        int rem=0;
        while(num!=0)
        {        
            rem=num%10;
            num/=10;
            sum=sum+rem;
        }
        if(sum>max)
        {
            index=i;
            max=sum;
        }
    }
    cout<<"maximum sum of digit in arr at index "<< index <<" is : "<<max<<endl;
    return 0;
}