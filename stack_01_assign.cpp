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
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}
