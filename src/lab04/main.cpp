#include <iostream>
#include <iomanip>

using namespace std;

void dump(int d[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << setw(4) << d[i];
        if ((i + 1) % 20 == 0)
            cout << endl;
    }
    cout << endl;
}

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 務必先閱讀公告上網課堂練習，所有解題線索皆在其中
// 參考 main() 函數補上所需的程式

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    const int LEN = 100;
    int rd[LEN];
    int cd[7];

    int len = 0;
    while(cin>>rd[len++]);
    len--;

    analysis(rd, len, cd);
    dump(cd, 7);

    return 0;
}