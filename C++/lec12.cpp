#include<iostream>
using namespace std;

int main(){
    int num,rem,ans=0,mul=1;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul*=10;
        

    }
    
    cout<<ans;

    /* while (num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul*=2;

    }
    cout<<ans;*/
    
}