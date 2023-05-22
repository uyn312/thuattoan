#include <bits/stdc++.h>
using namespace std;
void sx(string s)
{
    vector<string>c;
    vector<int>so;
    vector<string>x;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp)
    {
        x.push_back(tmp);
    }
    for(string str : x)
    {
        if(str[0]>='a'&&str[0]<='z'){
		    str.pop_back();
		    c.push_back(str);
		}
        else
        {
            str.pop_back();
            int m=stoi(str);
            so.push_back(m);
        }
    }
    sort(c.begin(),c.end());
    sort(so.begin(),so.end());
    int i=0,j=0,k=0;
    for(string str : xau)
    {
        if(k!=xau.size()-1){
            if(str[0]>='a'&&str[0]<='z'){
                cout<<chu[i]<<", ";
                i++;
            }
            else{
                cout<<so[j]<<", ";
                j++;
            }
        }
        else{
            if(str[0]>='a'&&str[0]<='z'){
			    cout<<chu[i]<<".";
			}
            else cout<<so[j]<<".";
        }
        k++;
    }
}
int main()
{
    while(true)
    {
        string s;
        getline(cin,s);
        if(s==".")break;
        else{
		    sx(s);
			cout<<endl;
		}
    }
    return 0;
}

