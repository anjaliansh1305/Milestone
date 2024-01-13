#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "Anjali";
    stack <char> st;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }

    string exp = " ";
    while(!st.empty()){
        char top_element = st.top();
        exp.push_back(top_element);
        st.pop();
    }

    cout<<"Reversed String is ="<<" "<<exp;
    return 0;
}