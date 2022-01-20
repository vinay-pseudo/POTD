#include<bits/stdc++.h>
using namespace std;

string solve (int N) {
    int flag = 0;
    for(int i=2;i*i<=N;i++) {
        if(N%i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    return "No";

    else
    return "Yes";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;

        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}