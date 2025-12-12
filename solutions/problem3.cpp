#include <iostream>
#include <vector>
using namespace std;

string moveState(int num) {
    if(num < 5) return "A";
    if(num % 2 == 0) return "B";
    return "DONE";
}

int main() {
    vector<int> arr;
    int x;

    while(cin >> x) { 
        arr.push_back(x); 
    }

    int done = 0;

    for(int i = 0; i < arr.size(); i++) {
        string st = moveState(arr[i]);
        if(st == "DONE") {
            done++;
        }
    }

    cout << done;
    return 0;
}