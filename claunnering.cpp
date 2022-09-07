#include<iostream>

using namespace std;

int main(){

    string s1,s2;
int n;
cin>>n;
cin>>s1;
cin>>s2;
int i=0;
int j=0;
while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
        i++;
        j++;
    }

    return 0;
}