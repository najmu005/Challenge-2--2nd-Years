#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> g(5);
    for(int i = 0; i < 5; i++) {
        cin >> g[i];
    }

    string dir;
    cin >> dir; 

    for(int r = 0; r < 5; r++) {
        if(dir[r] == 'L') {
           
            char first = g[r][0];
            for(int j = 0; j < g[r].size() - 1; j++) {
                g[r][j] = g[r][j+1];
            }
            g[r][g[r].size()-1] = first;
        }
        else {
           
            int lastIndex = g[r].size() - 1;
            char last = g[r][lastIndex];
            for(int j = lastIndex; j > 0; j--) {
                g[r][j] = g[r][j-1];
            }
            g[r][0] = last;
        }
    }

    
    string mid = g[2];
    int total = 0;

    for(char c : mid) {
        total += (int)c;
    }

    cout << total;
    return 0;
}