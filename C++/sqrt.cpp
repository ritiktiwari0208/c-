#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
            if(i*i==num){
                cout<<i;
                break;
            }
            else if(i*i>num){
                int ans = i-1;
                 cout<<ans;
                break;
            }
        }
}