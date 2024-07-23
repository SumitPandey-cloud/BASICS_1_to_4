#include<iostream>
//arithmetic operators
//bitwise operator
using namespace std;
int main(){
    int a,b,c1,c2,c3,c4,c5,c6,sum,sub,prod,x,div,mod;
    cout<<"Enter the value for A"<<endl;
    cin>>a;
     cout<<"Enter the value for B"<<endl;
    cin>>b;
    sum=a+b;//arithmetic operators
    sub=a-b;//arithmetic operators
    prod=a*b;//arithmetic operators
    div=a/3;
    mod=a%b;
    cout<<"Addition of entered value is"<<sum<<endl;//arithmetic operators
    cout<<"Subtraction of entered value is"<<sub<<endl;//arithmetic operators
    cout<<"Production of entered value is"<<prod<<endl;//arithmetic operators
    cout<<"A divided by 3 is "<<div<<endl;//arithmetic operators
    cout<<"Modulus of A and B is "<<mod<<endl;//arithmetic operators
    if(a<b){
        cout<<"B is Greater"<<endl; //comparison operator
    }

    else if(b<a){
        cout<<"A is Greater"<<endl;
         //comparison operator
    }

    else( cout<<"both are equal"<<endl);
       //comparison operator


        //bitwise operator
        c1=a&b;
        cout<<"VAlUE OF C IS"<<c1<<endl;
        c2=a|b;
        cout<<"VAlUE OF C IS"<<c2<<endl;
        c3=a^b;
        cout<<"VAlUE OF C IS"<<c3<<endl;
        c4=~a;
        cout<<"VAlUE OF C IS"<<c4<<endl;
       

      


}