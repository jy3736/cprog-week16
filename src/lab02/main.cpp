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
void seq(int d[], int len, int start, int step)
{
    for (int i = 0; i < len; i++)
    {
        d[i] = start;
        start += step;
    }
}

void fill(int d[], int len, int val)
{
    seq(d, len, val, 0);
}

void zero(int d[], int len)
{
    seq(d, len, 0, 0);
}

void seven(int d[], int len)
{
    fill(d, len, 7);
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int a1[10];
    int v;
    cin >> v;

    for(int i=1; i<=10; i++) {
        zero(a1,10);
        seq(a1,i,v,1);
        dump(a1,10);
    }

    return 0;
}