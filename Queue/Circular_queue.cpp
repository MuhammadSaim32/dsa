#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int *arr;
        int f,r,cap,currSIze;
    public:
        CircularQueue(int size){
            cap=size;
            f=-1;
            r=-1;
            arr= new int[size];
            currSIze=0;
        }

    void push(int val){
        if(currSIze==cap){
            cout<<"CircularQueue is full..\n";
            return;
        }

        if(f==-1){
            f++,r++;
            arr[f]=val;
            currSIze++;
            return;
        }

        r=(r+1)%cap;
        arr[r]=val;
        currSIze++;

    }


    void pop(){
        if(Empty()){
            cout<<"CircularQueue is Empty...\n";
            return;
        }

        f=(f+1)%cap;
        currSIze--;

    }
    
    int front(){
        return arr[f];
    }

   bool Empty(){
    return currSIze==0;
   } 

   void  printarr(){

    for(int i=0;i<cap;i++){
        cout<<arr[i];
    }
   }
};


int main(){

CircularQueue cq(3);

cq.push(10);
cq.push(20);
cq.push(30);
cq.pop();
cq.push(2);


while (!cq.Empty()) {
    cout << cq.front() << " ";
    cq.pop();
}


    return 0;

}