#include<iostream>
#include<list>
using namespace std;


class Queue{

private:
    list<int> ll;
public:
    void push(int val){
        ll.push_back(val);
    }

    void pop(){
        ll.pop_front();
    }

    int front(){
       return  ll.front();
    }

    int empty(){
        return ll.size()==0;
    }
};



 
 int main(){

Queue q;
q.push(1);
q.push(6);
q.push(8);

while(!q.empty()){
   cout<<q.front()<<" ";
    q.pop();
}



    return 0;
 }