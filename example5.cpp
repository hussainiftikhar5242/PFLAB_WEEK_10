#include<iostream>
using namespace std;
string name[5];
int age[5];
int find_larger_age(int i);
void display();
void input()
{
    for(int i=0;i<5;i++)
    {
        cout<<"enter name:";
        cin>>name[i];
        cout<<"enter age:";
        cin>>age[i];   
    }
}
main()
{
    input();
    int temp;
    string tempname;
    int index;
    for(int i=0;i<5;i++)
    {
        index=find_larger_age(i);
        temp=age[i];
        age[i]=age[index];
        age[index]=temp;
        tempname=name[i];
        name[i]=name[index];
        name[index]=tempname;
        
    }
    display();
}
int find_larger_age(int i)
{
    int larger=-1;
    int index;
    for(int j=i;j<5;j++)
    {
        if(age[j]>larger)
        {
            larger=age[j];
            index=j;
        }
    }
    return index;
}
void display()
{
    cout<<"the sorted list is:"<<endl;
    cout<<"name"<<"\t"<<"ages"<<endl;
    for(int i=0;i<=4;i++)
    {
        cout<<name[i]<<"\t"<<age[i]<<endl;
    }
}
