#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,9,2,83,5,7};
    int lar=arr[0];
    int arr_size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < arr_size ; i++)
    {
        if(lar < arr[i+1])
        {
            lar=arr[i+1];
        }
        else
        {
            cout<<"array is not sorted"<<endl;
            break;
        }

    }
    return 0;
}