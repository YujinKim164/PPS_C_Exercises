#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test_case;
    cin >> test_case;

    while (test_case-- > 0)
    {
        string s1;
        cin >> s1;

        string s2;
        for (int i = s1.size() - 1; i >= 0; i--)
            s2 += s1[i];

        int num = atoi(s1.c_str()) + atoi(s2.c_str());
        string ans = to_string(num);

        bool same = true;
        for (int i = 0; i < ans.size() / 2; i++)
        {
            if (ans[i] != ans[ans.size() - 1 - i])
            {
                same = false;
                break;
            }
        }

        if (same)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}