#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式
void dump(int dat[], int len, int s = 0, int e = -1)
{
    e = (e == -1 || e > len) ? len : e;
    s = (s < 0) ? 0 : s;
    for (int i = s; i < e; i++)
    {
        cout << setw(5) << dat[i];
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

    cin>>s;
    cin>>e;

    while (cin >> arr[i++]);
    i--;

    dump(arr, i, s, e);

    return 0;
}