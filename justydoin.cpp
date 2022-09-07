#include<iostream>
using namespace std;
class car{
public:
string colour;
int numberofwheel;
bool confortable;


};

class Hoda:public car{
public:
     Hoda(){
    cout<<"it is one of the best company of car"<<endl;
    cout<<"it is royal car company"<<endl;
}

};

class Bmw:public car{

// friend void playit(string st,int num,bool confortable){
//      this->colour=st;
//     this->numberofwheel=num;
//     this->confortable=confortable;
// }


public:
  Bmw(string st,int num,bool confortable){
     this->colour=st;
    this->numberofwheel=num;
    this->confortable=confortable;
}


void display(){
    cout<<"colour::"<<colour<<endl;
    cout<<"numberofwhee::"<<numberofwheel<<endl;
    cout<<"confortable"<<confortable<<endl;
}

};

class jeep:public car{
    public:
   jeep(){
    cout<<"jeep is the top model car "<<endl;
    cout<<"jeep colour is better than other car "<<endl;

     }
};

//   Bmw:: void playit(string st,int num,bool confortable){
//     this->colour=st;
//     this->numberofwheel=num;
//     this->confortable=confortable;
// }


class India{
    private:
     string c_name;
     int city;
     string cm_name;


     public:
     string pm_name;
India(int city,string pm_name,string c_name){
    this->c_name=c_name;
    this->city=city;
    this->pm_name=pm_name;
}
     friend void naming( string c_name,string cm_name,string pm_name ,int city);
     

};



}

class Bihar:public India{
     friend void naming( string c_name,string cm_name,string pm_name ,int city);

public:
Bihar(){
    
}


}


 

int main(){
  // Hoda h1;
    // h1.colour="red";
    // cout<<h1.colour;

Bmw b1("red",4,1);
//b1.playit("red",4,1);
b1.display();
jeep p1;
    return 0;
}