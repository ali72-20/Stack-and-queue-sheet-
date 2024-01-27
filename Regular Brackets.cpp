#pragma GCC optimize("Ofast")

#include <bits/extc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
typedef long long int ll;

const double EPS = 1e-9;
const ll OO = 0X3F3F3F3F3F3F3F3F;
const int N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;
string isBalanced(string s) {
    stack<char> st;
    for(auto c : s){
        if(c == '{' || c == '(' || c == '[')
            st.push(c);
        else{
            if(st.empty())
                return "NO";
            if(c == ')' && st.top() != '(')
                return "NO";
            if(c == ']' && st.top() != '[')
                return "NO";
            if(c == '}' && st.top() != '{')
                return "NO";
            st.pop();
        }
    }
    if(!st.empty())
        return "NO";
    return "YES";
}
void run() {
    string s;
    cin >> s;
    cout << isBalanced(s) << '\n';
}

signed main() {
    FIO
    int TestC = 1;
    cin >> TestC;
    while(TestC--){
        run();
    }
    return 0;
}
