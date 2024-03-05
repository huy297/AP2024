#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'beautifulStrings' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long c2(long n) {
    return n*(n-1)/2;
}
long beautifulStrings(string s) {
    long cnt = 1;
    int n = s.size();
    s = "?" + s;
    s = s + "!";
    long res = 0;
    long len = 0;
    for (int i=1; i<=n+1; i++) {
        if (s[i] == s[i-1]) cnt++;
        else {
            if (i <= n)
            len++;
            if (cnt >= 2) res++;
            cnt = 1;
        }
    }
    for (int i=1; i<=n-2; i++) if (s[i] == s[i+2] && s[i] != s[i+1]) res--;
     res += c2(len);
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long result = beautifulStrings(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

