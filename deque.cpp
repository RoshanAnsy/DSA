#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a,b,c,a1,b1,c1,a2,b2,c2;
    while(n--){
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
    }
   
    return 0;
    
}