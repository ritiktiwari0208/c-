#include<iostream>
using namespace std;

int main(){
   // print alphabets
   // for(char ch='a'; ch<='z'; ch++){
     //   cout<<ch<<endl;
    //}

    //number in decreasing order
    //int n;
    //cout<<"Enter the number: ";
    //cin>>n;
    //for(int i=n; i>=0; i--){
     //   cout<<i <<" ";
   // }

   // square of n natural numbers
   //int num,power,ans;
   //cout<<"enter the number: ";
   //cin>>num;
   //ans=num;
   //cout<<"enter the value of power: ";
   //cin>>power;
   //for(int i=1; i<power; i++){
   // ans=ans*num;
   //}
   //cout<<ans<<endl;

   // sum of 'n' natural numbers
   //int n,ans;
   //cout<<"Enter the number: ";
   //cin>>n;
   //ans=0;
   //for(int i=0; i<=n; i++){
   //   ans=ans+i;
   //}
   //cout<<"Sum of n natural numbers: "<<ans<<endl;
   //cout<<"sum by formula: "<<(n*(n+1))/2<<endl//;

   //factorial of nth natural numbers
   //int num,ans;
   //cout<<"Enter the number: ";
   //cin>>num;
   //ans=1;
   //for(int i=num; i>//0; i--){
   // ans=ans*i;
   //}
   //cout<<ans;

   //check prime number or not
   //int num;
   //cout<<"Enter the number: ";
   //cin>>num;
   //if(num<2){
   // cout<<"not prime"<<endl;
   // return 0;
   //}
   //else{
   //for(int i=2; i<num; i++){
   //  if(num%i==0){
   //     cout<<"not prime";
   //  }
   //}
   //cout<<"prime";
   //return 0;
   //}

   //fibonacci series
   int last=0,pre=1,curr,n;
   cout<<"enter value of n: ";
   cin>>n;
   for(int i=0; i<n-2; i++){
    curr=last+pre;
    last=pre;
    pre=curr;
   }
cout<<curr;


}