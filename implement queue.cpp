#pragma GCC optimize("Ofast")

#include <bits/extc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
typedef long long int ll;

const double EPS = 1e-9;
const ll OO = 0X3F3F3F3F3F3F3F3F;
const int N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;

void run() {
  queue<int>q;
  int n;
  cin >> n;
  while(n--){
      int o;
      cin >> o;
      if(o == 1){
          int x;
          cin >> x;
          q.push(x);
      }else if(o == 2){
          if(!q.empty())
              q.pop();
      }else{
          if(q.empty()){
              cout << "Empty!\n";
              continue;
          }
          cout << q.front() << '\n';
      }
  }
}

signed main() {
    FIO
    int TestC = 1;
    //cin >> TestC;
    while(TestC--){
        run();
    }
    return 0;
}
