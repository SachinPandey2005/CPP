#include<iostream>
using namespace std;
int main(){

    int day;
    cin>>day;
     
    switch(day){
        case 1:
        cout<<"mon"<<endl;
         break;

           case 2:
        cout<<"tues"<<endl;
         break;

           case 3:
        cout<<"wed"<<endl;
         break;

          default:
          cout<<"default case"<<endl;
        
    }

    //vowel and consunant

    char character;
    cin>> character;

    switch(character){
        
           case 'a':
        cout<<"vowel"<<endl;
         break;

           case 'b':
        cout<<"vowel"<<endl;
         break;

           case 'c':
        cout<<"vowel"<<endl;
         break;

           case 'd':
        cout<<"vowel"<<endl;
         break;

         
          default:
          cout<<"consunant"<<endl;

    }



    return 0;
}