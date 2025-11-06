#include<iostream>
using namespace std;
int main(){
     int num1=6;
     int num2=3; 
     // Arithmetic operator
     cout<<num1+num2<<endl;
     cout<<num1-num2<<endl;
     cout<<num1*num2<<endl;
     cout<<num1/num2<<endl;
     cout<<num1%num2<<endl;

     // Relational operator
      cout<<(num1==num2)<<endl;
      cout<<(num1!=num2)<<endl;
     cout<<(num1>=num2)<<endl;

     //Logical operator
     bool exp1=true;
     bool exp2=false;

     cout<<(exp1&&exp2)<<endl;
     cout<<(exp1||exp2)<<endl;
     cout<<(!exp2)<<endl;
     
     // Bitwise operator
        int  num3=5;
        cout<<(num3<<1)<<endl;
        cout<<(num3>>1)<<endl;

        int num4=8;
        cout<<(num3&num4)<<endl;
        cout<<(num3|num4)<<endl;

      // Mic operator
       
      int a=4;
      cout<<sizeof(a)<<endl;

      char name='a';
      cout<<sizeof(name)<<endl;

      bool flag;
      a==name? flag = true : flag=false;
      cout<<flag<<endl;

      cout<<(&a)<<endl;

     




     return 0; 

}