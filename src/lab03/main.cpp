#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式
void dump(int dat[], int len, int s = 0, int e = -1, bool r = false)
{
    e = (e == -1 || e > len) ? len : e;
    s = (s < 0) ? 0 : s;
    if (r)
    {
        for (int i = e - 1; i >= s; i--)
        {
            cout << setw(5) << dat[i];
        }
    }
    else
    {
        for (int i = s; i < e; i++)
        {
            cout << setw(5) << dat[i];
        }
    }
    cout << endl;
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int arr[100];
    int i = 0;
    int s, e;
    bool r;

    cin >> s;
    cin >> e;
    cin >> r;

    while (cin >> arr[i++])
        ;
    i--;

    dump(arr, i, s, e, r);

    return 0;
}