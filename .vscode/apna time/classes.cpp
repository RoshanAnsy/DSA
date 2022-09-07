#include<iostream>
using namespace std;

class complex{
private:
int real,img;
public:
complex(int r=0,int i=0){
    real=r;
    img=i;
}

complex operator  + (complex const &obj){
    complex res;
    res.real=real +  obj.real;
    res.img=img + obj.img;

}

void print(){
    cout<<real<<" +i "<<img<<endl;
}



};
int main(){

complex c1(10,5),c2(2,4);

complex c3=c1+c2;
c3.print();
    return 0;
}