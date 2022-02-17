#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    return S == P;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    if (isPalindrome(s))
    {
        cout << "Yes";
    }
    else
    {
        int startCount = 0;
        int endCount = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'a')
                endCount++;
            else
                break;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                startCount++;
            else
                break;
        }

        if (startCount > endCount)
        {

            cout << "No";
        }
        else if(isPalindrome(s.substr(startCount, n - startCount - endCount)))
        {
            cout << "Yes";
        }else{
            cout<< "No";
        }
        // cout<<" "<<startCount<<" "<<endCount<<" "<<s.substr(startCount, n - startCount - endCount);
    }
    return 0;
}