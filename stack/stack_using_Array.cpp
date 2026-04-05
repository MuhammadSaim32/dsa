#include<iostream>
using namespace std;

class stack{
 private:
    int arr[5];
    int top;

public:

    stack(){
        top=-1;
    }

    int Top(){
        if(top==-1){
            cout<<"stack is empty...";
            return -1;
        }
        return arr[top];
        
    }

    void push(int val){
        if(top==4){
            cout<<"stack is full";
        }else{
            arr[++top]=val;
        }
    }


    void pop(){
        if(top==-1){
            cout<<"stack is empty";
            return ;
        }

        --top;

    }

    bool empty(){
        return top==-1;
    }
};


int main(){

 stack s;
s.Top();
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);


while(!s.empty()){
cout<<s.Top()<<" ";
s.pop();
}
    return 0;
}