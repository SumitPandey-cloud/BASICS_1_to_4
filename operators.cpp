#include<iostream>
using namespace std;
int main(){
    int a,b,c,add,sub,a1,a2,a3,a4,a5,a6,a7;
    int div,prod;

    cout<<"Enter the value for A"<<endl;
    cin>>a;
    cout<<"Enter the value for B"<<endl;
    cin>>b;

    if(b>0 && b<200  ||  a<250){
     //--------COMPARISON OPERATOR //-------LOGICAL OPERATORS

         add=a+b;   //--------ARITHMETIC OPERATORS  //--------ASSIGNMENT OPERATOR(VALUES ASSIGNED TO ADD,SUN=B,A,B AND MANY MORE)
         sub=a-b;   //--------ARITHMETIC OPERATORS
         div=a/b;   //--------ARITHMETIC OPERATORS 
         prod=a*b;  //--------ARITHMETIC OPERATORS

         a1=a&b;    //------BITWISE OPERATOR
         a2=a|b;    //------BITWISE OPERATOR
         a3=a^b;    //------BITWISE OPERATOR
         a4=~b;     //------BITWISE OPERATOR
         a5=a<<2;   //------BITWISE OPERATOR
         a6=a>>2;   //------BITWISE OPERATOR
        

    cout<<"Sum of the entered value is "<<add<<endl<<endl;        
    cout<<"Diffrence of the entered value is "<<sub<<endl<<endl;
    cout<<"Division of the entered value is "<<div<<endl<<endl;
    cout<<"Product of the entered value is "<<prod<<endl<<endl;
    cout<<"AND of the entered value is "<<a1<<endl<<endl;
    cout<<"OR of the entered value is "<<a2<<endl<<endl;
    cout<<"XOR of the entered value is "<<a3<<endl<<endl;
    cout<<"NOT of the entered value is "<<a4<<endl<<endl;
    cout<<"LEFT SHIFT of the entered value is "<<a5<<endl<<endl;
    cout<<"RIGHT SHIFT of the entered value is "<<a6<<endl<<endl;
    }
  

    else{cout<<endl<<"CHECK THE VALUES OF A AND B, IT SHOULD BE LESS THE 250(for A) AND 200(for B)"<<endl;
         cout<<"                                   or"<<endl;
         cout<<"               ENTER NON-ZERO NUMBER FOR THE VALUE OF B"<<endl<<endl<<endl<<endl;};  //--------COMPARISON OPERATOR

   


    return 0;

    
}