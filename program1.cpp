#include <iostream>
using namespace std;
int a,b;
int main(){
    cout<<"Introdu doua numere naturale,diferite si nenule :"<<endl;
    cin>>a;
    cin>>b;
    if(a>b){int aux=0;
        aux=a;
        a=b;
        b=aux;}
    cout<<"Lista numerelor prime dintre "<<a<<" si "<<b<<" este :"<<endl;
    while(a<b){
        int c=0;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                c=1;
                break;}}
        if(c==0) cout<<a<<";";
        a++;}
    return 0;}
