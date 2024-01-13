#include<iostream>
#include<stack>

using namespace std;


int main(){
    
    stack <char> st;
    string str;
    cout<<" Enter the EXPRESSION for checking it is BALANCE or Not BALANCE ="<<" "<<endl;
    cin>>str;

    for(int i=0;i<str.length();i++){
        char ch = str[i];

        if(ch=='{' || ch=='[' || ch=='('){
            st.push(ch);
        }
        else{

            if(!st.empty()){
                char top = st.top();

                if((ch == ')' && top=='(') || (ch=='}' && top=='{') || (ch==']' || top=='[')){
                    st.pop();
                }


            }
        }
    }
    if(st.empty()){
        cout<<str<<" "<<"is BALANCED";
    }
    else{
        cout<<str<<" "<<"is Not BALANCED";
    }

    return 0;
}