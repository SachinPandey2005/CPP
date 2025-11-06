#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;

    for(int i=1;i<=n;i++ ){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
// hollow rectangular pattern
  int r,k;
  cin>>r,k;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=k;j++ ){
        if(i==1||j==1||i==r||j==k){
            cout<<"*";
        }
        else{
            cout<<"";
        }
    }
    cout<<endl;
  }

  //triangular pattern
  int a;
  cin>>a;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;

  }
  //inverse triangular pattern
     int b;
  cin>>b;
  for(int i=b;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    
  }

// question
 int c;
 cin>>c;
 for(int i=1;i<=c;i++){
    for(int j=1;j<=(c-i);j++){

    
    cout<<" ";
}
for(int j=1;j<=(2*i-1);j++){
    cout<<"*";
}
cout<<endl;

}
// number question
 int d;
 cin>>d;
 for(int i=1;i<=d;i++){
    for(int j=i;j<=d;j++){
        cout<<j;

    }
    for(int j=1;j<=(i-1);j++){
        cout<<j;
    }
    cout<<endl;
 }

 // 2. number question
   int f,g;
   cin>>f;
   cin>>g;
   for(int i=1;i<=f;i++){
    for(int j=1;j<=g;j++){
        cout<<i;
    }
    cout<<endl;

   }

   
   
    return 0;
}