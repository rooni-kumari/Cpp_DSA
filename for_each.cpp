// WAP by use of for each instead of for // 

#include<iostream>
using namespace std;
int main()
{
    string car[5]={"tata","BMW","swift","name","let"};
    
    // cout<<car[0]<<endl;
    // for(int i=0;i<5;i++)
    //{
      //  cout<<car[i]<<" ";
    //}

    for(string num : car)
    {
        cout<<num<<" ";
    }
    return 0;
}