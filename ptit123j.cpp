#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int ok=1;
    while(ok)
    {
        int a=0;
        string s;
        getline(cin,s);
        if(s=="."){
            ok=0;
        }
        else
        {
            int stop=0;
            stack<char>st;
            for(char c:s)
            {
                if(c=='('||c=='['){
                    st.push(c);
                }
                else if (c==')')
                {
                    if(st.empty()){
                        stop=1;
                        break;
                    }
                    else if(st.top()=='(') {
                        st.pop();
                    }
                    else {
                        break;
                    }
                }
                else if (c==']')
                {
                    if(st.empty()){
                        stop=1;
                        break;
                    }
                    else if(st.top()=='['){
                        st.pop();
                    }
                    else {
                        break;
                    }
                }
            }
            if(st.empty()&&gan==0){
                cout<<"yes\n";
            }
            else {
                cout<<"no\n";
            }
        }
    }
    return 0;
}

