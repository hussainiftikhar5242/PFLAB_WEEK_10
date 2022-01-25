#include<iostream>
using namespace std;
int rollnumber[]={1,2,3,4,5};
int marks[]={50,30,45,55,33};
int max();
main()
{
    int index;
    index=max();
    cout<<"roll number "<<rollnumber[index]<<" has highest marks: " <<" and marks is:"<<marks[index];
}
int max()
{
    int mark=0;
    int index=0;
    for(int i=0;i<5;i++)
    {
        if(marks[i]>mark)
        {
            mark=marks[i];
            index=i;
        }
    }
    return index;
}