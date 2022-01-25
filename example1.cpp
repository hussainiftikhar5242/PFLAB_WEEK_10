#include<iostream>
using namespace std;
main()
{
    int number[5]={1,3,5,8,9};
    int number2[5]={12,14,56,98,70};
    for(int i=0;i<5;i++)
    {
        cout<<"index is :"<<i;
        cout<<" and value at this index is:"<<number[i]<<" "<< number2[i] <<endl;
    }
}