#include<iostream>
using namespace std;
void  isable(int a,int b,int c,int k){

    if((a+b+c)>=k){
cout<<"yes";
    }
    else{
  cout<<"No";
    }
    
}
int main(){
int a,b,c,k;
cin>>a>>b>>c>>k;
isable(a,b,c,k);
    return 0;
}