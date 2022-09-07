#include<iostream>
#include<queue>
using namespace std;
class stack{
    int N;
    queue<int>q1;
    queue<int>q2;
    public:
    stack(){
        N=0;

    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int peek(){
      return q1.front();
        N--;
    }
    int size(){
        return N;
    }
};

int main()
{
    stack st;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        st.push(arr[i]);
    }
    for(int i=0;i<6;i++){
  cout<< st. peek()<< " ";
  st.pop();
    };
    return 0;
} // namespace std;
