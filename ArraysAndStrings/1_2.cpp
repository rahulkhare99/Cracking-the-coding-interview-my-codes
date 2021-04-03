#include <bits/stdc++.h>
using namespace std;

bool comp(char a, char b)
{
    if(a <= b)
        return true;
    return false;
}

bool answer()
{
    string a, b;
    cin >> a;
    cin >> b;
    int l1 = a.size(); 
    int l2 = b.size();
    if(l1 != l2)
        return false;
    sort(a.begin(), a.end(), comp);
    sort(b.begin(), b.end(), comp);
    for(int i = 0; i < l1; i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main()
{
    cout << answer() << "\n";
}