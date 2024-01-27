#pragma GCC optimize("Ofast")

#include <bits/extc++.h>
using namespace std;

#define Ace ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void LOCAL(){
#ifndef ONLINE_JUDGE
    ::freopen("in.txt","r",stdin);
    ::freopen("out.txt","w",stdout);
#endif
}

void GO() {
    stack<char> st;
    string s;
    cin >> s;
    for(int i = 0;i < s.size(); ++i){
        if(st.empty())
            st.push(s[i]);
        else{
            if(s[i] == st.top())
                st.pop();
            else {
                st.push(s[i]);
            }
        }
    }
    string ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
}

signed main() {
    Ace
    LOCAL();
    int TestC = 1;
  //  cin >> TestC;
    while(TestC--){
        GO();
    }
    return 0;
}
