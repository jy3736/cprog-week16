#include <iostream>
#include <iomanip>

using namespace std;

// 參考 fill_zero() 及 main() 函數補上所需的程式

void fill_seq(int dat[], int len, int sval, int step)
{
    for (int i = 0; i < len; i++)
    {
        dat[i] = sval;
        sval+=step;
    }
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

void dump(int dat[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << setw(5) << dat[i];
    }
    cout << endl;
}

void fill_zero(int dat[], int len)
{
    fill_seq(dat,len,0,0);
}

const int MAX_LEN = 30;

int main()
{
    int arr[MAX_LEN];
    int len;
    int start, step;

    cin >> len;
    cin >> start;
    cin >> step;

    fill_zero(arr, len);
    dump(arr, len);
    fill_seq(arr, len, start, step);
    dump(arr, len);

    return 0;
}