#include<iostream>
using namespace std;

int main(){
     int n=5;
     /*for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j <=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
                
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
        
    }

    
     for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j<=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
                
            }
            else{
                cout<<i;
            }
            
        }
        cout<<endl;
        
    }

    
    
     for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j<=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
                
            }
            else{
                cout<<j+(i-5);
            }
            
        }
        cout<<endl;
        
    }

    for (int i = 1; i <=n; i++)
     {
        char ch='A'+(i-1);
         for (int j = 1; j<=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
                
            }
            else{
                cout<<ch;
            }
            
        }
        cout<<endl;
        
    }

    for (int i = 1; i <=n; i++)
     {
         for (int j = 1; j<=n; j++)
        {   
            char ch;
            if (j<=n-i)
            {
                cout<<" ";
                
            }
            else{
                ch='A'+(j+(i-(n+1)));
                cout<<ch;
            }
            
        }
        cout<<endl;
        
    }*/


    for (int i = 1; i <=n; i++)
     {
         for (int j = 5; j>=1; j--)
        {
            if (j>i)
            {
                cout<<" ";
                
            }
            else{
                cout<<j;
            }
            
        }
        cout<<endl;
        
    }
    
}