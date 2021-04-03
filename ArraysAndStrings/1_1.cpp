#include <bits/stdc++.h>
using namespace std;

bool answer()
{
    string str;
    cin >> str;
    int checker = 0, l = str.size();
    for(int i = 0; i < l; i++)
    {
        int x = str[i] - 'a';
        if((checker & (1 << val)) > 0)
            return false;
        checker |= (1 << val);
    }
    return true;
}

int main()
{
    cout << answer() << "\n";
}