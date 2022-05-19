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
    int a1[] = {3, 4, 5, 3, 2, 4, 5, 6, 7, 8, 9};
    int a2[] = {5, 5, 5, 5, 5, 5, 5};
    int a3[] = {1, 2, 3, 4, 5, 6};

    int whichone;

    cin >> whichone;

    switch(whichone) {
        case 1 : M_dump(a1); break;
        case 2 : M_dump(a2); break;
        case 3 : M_dump(a3); break;
        default: break;// do nothing
    }

    return 0;
}