#include <iostream>
using namespace std;

bool Prime(int num){
    if (num<2)
    return 0;
    
    for (int i = 0; i <= num; i++)
    {
        if (num%i==0 && num==i )
        return 1; 
        
    }
    
    return 0;
}
int Fact(int num=5){//default parameter
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

void Swap(int &a , int &b){
    int c;
    c=b;
    b=a;
    a=c;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<Prime(a)<<endl;
    cout<<Fact(a)<<endl;
    cout<<Prime(b)<<endl;
    cout<<Fact(b)<<endl;
    cout<<Prime(b-a)<<endl;
    cout<<Fact(b-a)<<endl;
    Swap(a,b);  // inbuilt function : swap
    cout<<a<<" "<<b;

}