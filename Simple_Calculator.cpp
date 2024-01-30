#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char operation;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    cout<<"Choose Operation to Perform : "<<endl;
    cout<<"1.>"" + : For Adiition ";
    cout<<"\n2.> - : For Substraction ";
    cout<<"\n3.> * : For Multiplication ";
    cout<<"\n4.> / : For Division ";
    cout<<"\n        Enter your choice : ";
    cin>>operation;
    switch(operation)
    {
    case '+':
    {
        cout<<"      Solution is : "<<num1+num2;
         break;
    }
    case  '-':
    {
        cout<<"Solution is : "<<num1-num2;
         break;
    }
    case '/':
    {
        cout<<"Solution is : "<<num1/num2;
         break;
    }
    case '*':
    {
        cout<<"Solution is : "<<num1*num2;
         break;
    }
    return 0;
    }

}