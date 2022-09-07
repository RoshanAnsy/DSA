#include "bits/stdc++.h"
using namespace std;
class Hero{
    private:
int age;
char health;
 int*length;
public:
Hero (int age,char health){ 
    
   
    this->health=health;
    this->age=age;
}
void print(){
     cout<<"length of your is this::"<<*length<<endl;
    cout<<"age of your is this::"<<age<<endl;
    cout<<"health is this now::"<<health<<endl;
}
void setage(int a){
     a=10;
    age=a;
}
int getage(){
    return age;
}

};


int main(){
    Hero h1(19,'a');
    
h1.print();
// Hero B(ramesh);
// B.print();
// Hero ramesh(20,'S',40);
// ramesh.print();
  //  cout<<"age of ramesh::"<<ramesh.getage()<<endl;
 //cout<<"health of ramesh::"<<ramesh.health<<endl;
    return 0;
}