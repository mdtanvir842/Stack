#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(2);
    st.push(10);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(8);
    /*for(int i=0;i<6;i++){
        cout<<st.top()<<endl;
        st.pop();
    }*/
    for(int i=0;!st.empty();i++){
        cout<<st.top()<<endl;
        st.pop();
    }
    /*while(!st.empty()){
        cout<<st.top()<<endl;
        st.top();
    }*/
}
