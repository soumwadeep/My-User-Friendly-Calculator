#include<iostream> 
using namespace std;
void add()
{
    float a,b,sum;
    cout<<"Enter 1st Number:";
    cin>>a;
    cout<<"Enter 2nd Number:";
    cin>>b;
    sum=a+b;
    cout<<"Sum="<<sum<<endl;
    
}
void sub()
{
    float a,b,c,diff;
    cout<<"Enter 1st Number:";
    cin>>a;
    cout<<"Enter 2nd Number:";
    cin>>b;
    cout<<"Enter Your Choice:(1 For First Option And 2 For Second Option)."<<endl;
    cout<<"1.Go For 1st Number-2nd Number?"<<endl;
    cout<<"2.Go For 2nd Number-1st Number?"<<endl;
    cin>>c;
    if(c==1)
    {
        diff=a-b;
    }
    else
    {
        diff=b-a;
    }
    cout<<"Difference="<<diff<<endl;
}
void mul()
{
    float a,b,pro;
    cout<<"Enter 1st Number:";
    cin>>a;
    cout<<"Enter 2nd Number:";
    cin>>b;
    pro=a*b;
    cout<<"Product="<<pro<<endl;
}
void div()
{
    float a,b,c,quo;
    cout<<"Enter 1st Number:";
    cin>>a;
    cout<<"Enter 2nd Number:";
    cin>>b;
    cout<<"Enter Your Choice:(1 For First Option And 2 For Second Option)."<<endl;
    cout<<"1.Go For 1st Number/2nd Number?"<<endl;
    cout<<"2.Go For 2nd Number/1st Number?"<<endl;
    cin>>c;
    if(c==1)
    {
        quo=a/b;
    }
    else
    {
        quo=b/a;
    }
    cout<<"Quotient="<<quo<<endl;
}
int main()
{
    start:
    int n,x;
    cout<<"Hi!"<<endl;
    cout<<"I Am A C++ Coded Calculator Created By Soumwadeep Guha."<<endl;
    cout<<"I Am Known For My Speed Calculations!"<<endl;
    cout<<"What Do You Want To Do?"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter 1 To Add; 2 To Subtract; 3 To Multiply; 4 To Divide !"<<endl;
    cin>>n;
    if(n==1)
    {
        add();
    }
    else if(n==2)
    {
        sub();
    }
    else if(n==3)
    {
        mul();
    }
    else if(n==4)
    {
        div();
    }
    else
    {
        cout<<"SORRY,YOU HAVE GIVEN A WRONG INPUT!"<<endl;
        cout<<"PLEASE TRY AGAIN!!"<<endl;
        goto start;
        
    }
    cout<<"Do You Want To Continue Doing More Operations?"<<endl;
    cout<<"Then Enter 1 To Restart The Calculator Or If You Want To Exit Then Enter Any Other Value Except 1!"<<endl;
    cin>>x;
    if(x==1)
    {
            cout<<"OK Restarting Process!"<<endl;
            cout<<endl;
            cout<<endl;
            goto start;
    }
    else
    {
            cout<<"Ok Then Bye!"<<endl<<"Thank You For Using Me!"<<endl;
    }

return 0;
}