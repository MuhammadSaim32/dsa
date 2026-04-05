#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stock(vector<int> arr,vector<int> &span){ // 0(n^2) Tc 0(1) Sc

    for(int i=0;i<arr.size();i++){
        
        int curr=0;
        int j=i;

            while(arr[j]<=arr[i] && j!=-1){
                curr++;
                j--;
            }
           
        

        span.push_back(curr);


    }
    
    return span;
}


int main(){

    vector<int> val = {100, 80, 60, 70, 60, 75, 85};
    vector<int> span(val.size(),0);
    // stock(val,span);

    stack<int> st;
    //optimal 0(n) Tc and 0(n) Sc due to stack ds.

    for(int i=0;i<val.size();i++){

        while(st.size()>0 && val[st.top()]<=val[i]){   
            st.pop();
        }
 
        if(st.empty()){
            span[i]=i+1;

        }else{
            span[i]=i-st.top();
        }

    st.push(i);  //previous high =imedeate greater value for any day.
    // for example for 60 prev high is 80 .
    // here we use stack ds for prev high logic

    }
    for(int val:span){
        cout<<val<<" ";
    }
    return 0;
}


//Notes 

// span
//👉 Stock Span is the number of consecutive days before (and including) the current day
//where the price was less than or equal to today’s price.

//Input:  price[] = [100, 80, 60, 70, 60, 75, 85]
//Output: span[]  = [1,   1,  1,  2,  1,  4,  6]


