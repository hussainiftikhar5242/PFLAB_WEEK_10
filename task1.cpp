#include<iostream>
using namespace std;
int size;
void averagemarks();
main()
{
    cout<<"enter length of array:";
    cin>>size;
    averagemarks();
}
void averagemarks()
{
    string name[size];
    float marks[size];
    float sum=0;
    float average=0;
    for(int i=0;i<size;i++)
    {
        cout<<"enter name:";
        cin>>name[i];
        cout<<"enter exercise marks:";
        cin>>marks[i];
        sum=sum+marks[i];    
    }
    average=sum/size;
    cout<<"average of exercise marks is:"<<average;
    
    
}