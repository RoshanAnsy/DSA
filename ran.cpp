#include<iostream>
#include<vector>
using namespace std;
void solve(string str,int index,string output,vector<string> &ans){
    
if(index >=str.length()){
if(str.length()>0){
    ans.push_back(output);
}
    
    return;
}
solve(str,index+1,output,ans);

char element=str[index];
output.push_back(element);

solve(str,index+1,output,ans);

}
vector<string> subsequences(string str){
    vector<string> ans;

    string output="";
int index=0;
solve(str,index,output,ans);
return ans;
}

int main(){
    string str="abd";

   for(int i=0;i<str.length();i++){
        subsequences(str);
   }
    return 0;
}