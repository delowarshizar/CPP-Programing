#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;
        string S;
        cin >> S;
        int Q;
        cin >> Q;
        vector<int> queries(Q);
        for (int &x : queries) cin >> x;

     
        for (char &c : S) c = tolower(c);

      
        vector<int> last_index(26, -1);
        for (int i = 0; i < n; ++i) {
            last_index[S[i] - 'a'] = i;
        }

        vector<int> fruit_count(26, 0);
        for (char c : S) {
            fruit_count[c - 'a']++;
        }
        cout << "Case " << t << ":";
        for (int x : queries) {
            vector<int> visited(26, 0);
            int unique_fruits = 0;
            for (int i = x - 1; i < n; ++i) {
                char c = S[i];
                if (last_index[c - 'a'] >= i && !visited[c - 'a']) {
                    visited[c - 'a'] = 1;
                    unique_fruits++;
                    if (unique_fruits == 26) break; 
                }
            }
            cout << " " << unique_fruits;
        }
        cout << "\n";
    }
    return 0;
}
