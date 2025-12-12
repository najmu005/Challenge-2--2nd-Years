#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    
    reverse(s.begin(), s.end());

   
    string temp = "";
    for(int i = 0; i < s.length(); i++) {
        if((i+1) % 3 != 0) {
            temp += s[i];
        }
    }

   
    for(int i = 0; i < temp.length(); i++) {
        temp[i] = char(temp[i] + 2);
    }

    
    int v = 0;
    for(char c : temp) {
        char x = tolower(c);
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') {
            v++;
        }
    }

    cout << v;
    return 0;
}