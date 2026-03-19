#include<iostream>
using namespace std;
int main(){
	for(int row=0;row<3;row=row+1)
	{
	    for(int col=0;col<5;col=col+1)
	    {
	        cout<<"$";
	    }
	       cout<<endl;
	}
    // square pattern
	for(int row1=0;row1<4;row1=row1+1)
	{
	    for(int col1=0;col1<4;col1=col1+1)
	    {
	        cout<<"$ ";
	    }
	       cout<<endl;
	}
		for(int row=0;row<3;row=row+1)
	{
	    if(row==0|| row == 2){
	        for (int col=0;col<5;col=col+1)
	        {
	            cout<<"* ";
	        }
	    } 
	    else{
	        cout<<"* ";
	        for(int i=0;i<3;i=i+1){
	            cout<<"";
	        }
	        cout<<"* ";
	    }
	   
   int n;
    cin>>n;
	for(int row=0;row<n;row=row+1){
	    for(int coln=0;coln<row+1;coln=coln+1){
	        cout<<"$";
	    }
	    cout<<endl;
	    
	}
	
	//half inverted pyramid
	  int r;
    cin>>n;
	for(int row=0;row<n;row=row+1){
	    for(int coln=0;coln<r-row;coln=coln+1){
	        cout<<"$";
	    }
	    cout<<endl;
	    
	}
  




	for(int row=0;row<3;row=row+1)
	{
	    if(row==0|| row == 2){
	        for (int col=0;col<5;col=col+1)
	        {
	            cout<<"* ";
	        }
	    } 
	    else{
	        cout<<"* ";
	        for(int i=0;i<3;i=i+1){
	            cout<<"";
	        }
	        cout<<"* ";
	    }
		//   half pyramid
  
	 int m;
	 cin>>m;
	 for(int row=0;row<m;row=row+1){
	     for(int coln=0;coln<row+1;coln=coln+1 ){
	         cout<<coln+1;
	     }
	     cout<<endl;
	 }

	 int m;
	 cin>>m;
	 for(int row=0;row<m;row=row+1){
	     for(int coln=0;coln<m-row;coln=coln+1 ){
	         cout<<coln+1;
	     }
	     cout<<endl;
	 }

	}
}
