#include<iostream>
using namespace std;
int rollnumber[5]={1,2,3,4,5};
float cgpa1[5]={3.4,4.0,2.7,3.5,3.0};
void cgpa(int n);
main()
{
    int number;
    cout<<"enter rollnumber from 1 to 5 for desired cpga:";
    cin>>number;
    cgpa(number);
}
void cgpa(int n)
{
    for(int i=0;i<5;i++)
    {
        if(rollnumber[i]==n)
        {
            cout<<"roll number is :"<<rollnumber[i]<<" "<<endl;
            cout<<"cgpa of that roll number is:"<<cgpa1[i]<<endl;
        }
    }
}
