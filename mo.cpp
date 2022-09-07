#include<iostream>
using namespace std;
// class human{
//      // static int num=1;
//     public:

//     int age;
//    static int num;
//     string name;
//     string friend_name;
//     bool friend_susation;
//     int populaion;

//     human(int age,string name,bool friend_susation){
//         this->age=age;
//         this->name=name;
//         this->friend_susation=friend_susation;

//     }
//     void print_data(){
//         cout<<"this is your data::"<<endl;
//         cout<<"name::"<<name<<endl;
//         cout<<"age::"<<age<<endl;
//         cout<<"friend susation ::"<<endl;
//cout<<"no of friend you have "<<num<<endl;
   // }
//};
//human:: num=1;
// class h1:public human{
//     public:
// h1(int name, string friend_name){
//     this->name=name;
//     this->friend_name=friend_name;
// }
// // void print(){
// //     cout<<
// // }
// };



//int main(){

//   h1 rahul=new h1( "Rahul" , "sohan");
//   rahul.print();

// h1 H("Rahul" , "sohan");
// H.print();


// human H1(19,"rohan",true);

// H1.print_data();
// cout<<H1.num;
//     return 0;
// }







// class Human{
// public:
// int age;
// string name;
// bool it_is_you;

// };

// class H1:public Human{
// public:
// H1(int age,string anme){
//     this->name=name;
//     this->age=age;
// }
// };


// class Friends:public H1{
//     public:
//    void printing_info(){
//     cout<<"it is you ?"<<endl;
//    }
// };


//  int main(){

// Friends f(19,"sohan");
// //f.age=19;
// cout<<f.age<<endl;

// class H1(19,"rohan");

//     return 0;
//  }



// class Car{
//     public:

// string name;
// string colour;
// private:
// Car(string name,string colour){
//     this->name=name;
//     this->colour=colour;
// }
// void printinfo(){
//     cout<<name<<endl;
//     cout<<colour<<endl;
// }
// };

// class child:public Car{
//     public:
//     int x;
// //string number;
// // child(string num){
// //     this->number=num;
// // }
// void printinfo(int a){
//     this->x=a;
//     cout<<"this is your number how do you feel it is not working "<<x<<endl;
// }
// };

// int main(){

//  Car c1("Audi","black");
// //c1.printinfo();

// child C1;
// C1.printinfo(10);   




//  return 0;
// }
int find(int a[],int n){
    int sum=0;

    for(int i=0;i<n;i++){
     //sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            //cout<<sum<<endl;
        }
    }
    return sum;
}
int main(){
    int a[]={1,2,2};
   cout<< find(a,3);

   return 0;
}