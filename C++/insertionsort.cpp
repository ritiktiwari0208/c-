#include<iostream>
using namespace std;



int main(){
    int a[n];
    cout<<"enter number of elements" n;
    
    for(int i=1; i<=5; i++){
        int temp=a[i];
        int j=i-1;
        for(int j=i-1; j>=0; j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
        
    }
    for(int i=1; i<=5; i++)  {
        cout<<a[i];
      }
    
}

