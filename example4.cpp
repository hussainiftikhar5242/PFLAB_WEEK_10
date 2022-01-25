#include<iostream>
using namespace std;;
char code[]={'v','w','x','y','z'};
float discount[]={.35,0.23,0.34,.22,0.20};
int find_code_index(char c);
void bill(int index,int item,int price);
main()
{
    char ch;
    int item=0;
    int price=0;
    cout<<"enter code:";
    cin>>ch;
    cout<<"enter items:";
    cin>>item;
    cout<<"enter price:";
    cin>>price;
    int index=find_code_index(ch);
    bill(index,item,price);
}
int find_code_index(char c)
{
    for(int i=0;i<5;i++)
    {
        if(c==code[i])
        {
            return i;
        }
    }
    return -1;
}
void bill(int index,int item,int price)
{
    int total=0;
    int total1=0;
    if(index>=0 && index<=4)
    {
        total=price*item;
        total1=total*discount[index];
        total1=total-total1;
        cout<<"totalbill is:"<<total1;
    }
    else 
    {
        cout<<"wrong:";
    }
    
}