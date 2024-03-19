#include<iostream>
using namespace std;

/*char Capital(char ch){
    char name;
    name=ch-'a'+'A';
    return name;
}
int Count(int num){
    int count=0;
    while (num)
    {
        num/=10;
        count++;
    }
    return count;
}

bool Armstrong(int num , int digit){
    int ans=0,rem;
    while(num){
        rem=num%10;
        num/=10;
        ans = ans+pow(rem , digit);

    }
    if (ans==num)
    {
        return 1;
    }
    
    return 0;

}*/
int Fact(int num=5){//default parameter
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

int trailingzeroes(int num){
    int rem , count=0;
    while (num)
    {
        rem=num%10;
        num/=10;
        if (rem==0)
        {
            count++;
        }
        else{
            break;
        }
        
    }
    return count;
    
}

int main(){
    //char ch;
    //cout<<"Enter character in small: ";
    //cin>>ch;
    //cout<<Capital(ch)<<endl;
    int n;
    cin>>n;
    //int digit=Count(n);
    //cout<<Armstrong(n , digit);
    int value=Fact(n);
    cout<<value<<endl;
    cout<<trailingzeroes(value);


}