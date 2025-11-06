#include<iostream>
using namespace std;
int main(){
    //while loop
    int n;
    cin>>n;
    int sum=0;

    int i=1;
    while(i<=n){
        sum+=i;
        i++;
     }
     cout<<sum<<endl;

     // for loop
      int m;
      cin>>m;

      int sum1=0;
      for(int i=1;i<=n;i++){
        sum+=1;
    }
    cout<<sum<<endl;
    // Do while
     int j;
     cin>>j;
     int sum3=0;
    do{
        int num3;
        cin>>num3;
        sum+=num3;
        n--;
     } while(n>0);

     cout<<sum<<endl;
       

     return 0;
}