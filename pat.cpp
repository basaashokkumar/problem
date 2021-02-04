#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int lps(string);
int main() {
//code
int T;
cin >> T;
getchar();
while (T--) {
string s;
cin >> s;
cout<<lps(s)<<endl;
}
return 0;
}
int lps(string s) {
int n = s.size();
int lps[n];
int i = 1, j = 0;
lps[0] = 0;
while (i < n) {
if (s[i] == s[j]) {
j++;
lps[i] = j;
i++;
} else {
if (j != 0){
j=lps[j-1];
}
else {
lps[i] = 0;
i++;
}
}
}
return lps[n-1];
}
