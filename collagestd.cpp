#include<iostream>
using namespace std;
class item{
int a;
float b;
 public:
 int input(int x,float y){
     a=x;
     b=y;
 }

void find(){
    cout<<"numeric value of a"<<a<<endl;
    cout<<"numeric value of b"<<b<<endl;
}


 };
int main(){

item st;
st.input(10,1);
cout<<st.find();

    return 0;
}