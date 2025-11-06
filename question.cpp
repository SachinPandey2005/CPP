#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age<12){
        cout<<"child"<<endl; 
    }

    else if(age>18){
        cout<<"adult"<<endl;
     }
     else{
        cout<<"teenager"<<endl;
     }
     //divisible by 3
       
     int num1;
     cin>>num1;

     if((num1%2==0)&&(num1%3==0  )){
        cout<<num1<<endl;
     }

       // divisible by 3 ,5
       
     int num2;
     cin>>num2;

      if((num1%3==0)||(num1%5==0  )){
       cout<<num1<<endl;
    }





      return 0;

}

          

