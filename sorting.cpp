#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,9,2,4,7,3,9,4};
    int arr_size= 0;
    arr_size= sizeof(arr)/sizeof(arr[0]);
    cout<<"length of arr"<<arr_size<<endl;
    for(int i=0 ; i < arr_size ; i++)
    {
        for(int j=0; j < arr_size ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               
            }
        }
    }
   for(int i=0;i<arr_size;i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}



