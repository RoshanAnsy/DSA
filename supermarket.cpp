#include<iostream>
using namespace std;
class shopping{
    private:
    int pincode;
    float price;
    float dis;
    string pname;
    public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void list();
    void recept();


};
void shopping:: menu(){
    m;
    int choice;
    string email;
    string passward;
    cout<<"\t\t\t\t____________________"<<endl;
    cout<<"\t\t\t\t____________________"<<endl;
    cout<<"\t\t\t\t____________________"<<endl;
    cout<<"\t\t\t\t_supermarket Main Menu_"<<endl;
    cout<<"\t\t\t\t____________________"<<endl;
    cout<<"\t\t\t\t____________________"<<endl;
    cout<<"\t\t\t\t____________________"<<endl;

    cout<<"\t\t\t 1) Administrator   |"<<endl;
    cout<<"\t\t\t                    |"<<endl;
    cout<<"\t\t\t 2) BUyer           |"<<endl;
    cout<<"\t\t\t                    |"<<endl;
    cout<<"\t\t\t  3) Exit           |"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1: /* constant-expression */
        /* code */
        cout<<"\t\t\t please inter Login"<<endl;
        cout<<"\t\t\t Enter email        "<<endl;
        cin>>email;
        cout<<endl;
        cin>>passward;
        if(email="robby@gmail.com" && passward="robby@123")
        administrator();
        else
        cout<<"Invalid Email Id"<<endl;
        break;
    
    case 2:
    buyer();

    case 3:
    exit(0);
    default:
    cout<<"please select form the given option"<<endl;
        break;
    }
goto m;
}

void shopping::administrator(){
    int choice;
    
}