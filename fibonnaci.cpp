#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number for fibonnaci series "<<endl;
    cin>>num;
    int arr[num];
    int total=1;
    for(int i=0;i<num;i++)
    {
    	
        if(i==0)
        {
           arr[i]=0;
        }
        else
        {   arr[i]=total;
            total=total+arr[i-1];
            
        }
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}