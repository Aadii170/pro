#include <iostream>
using namespace std;

int main(){
 int t,x,y,z;
 cin>>t;
  for(int i=t; i>0;i--)
  {
    cin>>x>>y>>z;
    
    //fight1
    int diff1= min(y,z);
    if (diff1>y)
    {
        y=0;
    }
    else
    {
        
    y=y-diff1;
    }
     if (diff1>z)
    {
        z=0;
    }
    else
    {
        
    z=z-diff1;
    }
    //fight2
    int diff2= min(x,y);
    if (diff2>x)
    {
        x=0;
    }
    else
    {
        
    x=x-diff2;
    }
     if (diff1>y)
    {
        y=0;
    }
    else
    {
        
    y=y-diff1;
    }
    //fight3
    int diff3= min(x,z);
    if (diff3>x)
    {
        x=0;
    }
    else
    {
        
    x=x-diff3;
    }
     if (diff3>z)
    {
        z=0;
    }
    else
    {
        
    z=z-diff3;
    }
    if (x> 0)
    {
      cout <<"YES";

    }
    else
    {
        cout<<"NO";
    }
    
    
    

  }
  

  

    return 0;
}