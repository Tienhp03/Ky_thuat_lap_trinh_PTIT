#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int ok = 1;
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (st.size() && st.top() == '(')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (st.size() && st.top() == '[')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else
            {
                if (st.size() && st.top() == '{')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
        }
        if (st.size()!=0)
            ok = 0;
        if (ok == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}