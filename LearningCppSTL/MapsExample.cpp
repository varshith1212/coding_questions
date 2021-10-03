/*
Given N Strings, print unique strings in lexiographical order
with their frequency
N <= 10^5
|S| <= 100  here if it is 100000 then we 
            cannot use maps because of string comparisions inside maps are costly.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	string s;
    	cin >> s;
    	//m[s] = m[s] + 1;
    	m[s]++;
    }
    
    for(auto &pr : m) {
    	cout << pr.first << " " << pr.second << endl;
    }
    
    return 0;
}