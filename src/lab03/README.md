## 課堂練習 03 - 計算一維陣列長度 + 使用巨集(Macro)


```c++
#include <iostream>
#include <iomanip>

using namespace std;
```

#### 宣告兩個測試用陣列：a1 及 a2
- a1 ：給定長度及初始值
- a2 ：沒有設定長度，只給初始值
    - 編譯器會依據`初始值`設定陣列長度


```c++
int a1[6] = {1, 4, 2, 5, 6, 7};
int a2[] = {1, 4, 2, 5, 6, 7, 8, 9};
```

### 陣列輸出函數
- d   ：陣列
- len ：陣列 d 的長度(幾個元素)
- 每一行最多印20個元素，每一筆資料的寬度為4個字元


```c++
void dump(int d[], int len) {
    for(int i=0; i<len; i++) {
        cout<<setw(4)<<d[i];
        if ((i+1)%20==0)
            cout<<endl;
    }
    cout<<endl;
}
```

### 使用 `sizeof` 計算陣列長度
- `sizeof` 的單位為位元組(bytes)
- `sizeof(a1)` 回傳a1陣列使用幾個位元組數
- `sizeof(int)` 回傳1個整數使用幾個位元組
- `sizeof(a1)/sizeof(int)` 計算`a1陣列`有幾個`整數`元素


```c++
dump(a1,6);
dump(a2,8);

cout<<sizeof(a1)/sizeof(int)<<endl;
cout<<sizeof(a2)/sizeof(int)<<endl;
int a1_len = sizeof(a1)/sizeof(int);
int a2_len = sizeof(a2)/sizeof(int);

dump(a1,a1_len);
dump(a2,a2_len);
```

       1   4   2   5   6   7
       1   4   2   5   6   7   8   9
    6
    8
       1   4   2   5   6   7
       1   4   2   5   6   7   8   9



```c++
int a3[] = {1,4,3,6,7,8,9,0,2};
dump(a3,sizeof(a3)/sizeof(int));
```

       1   4   3   6   7   8   9   0   2


### 用巨集簡化函數的呼叫
- 使用 `#define` 定義巨集
    - `#define M_dump(a) dump(a,sizeof(a)/sizeof(int))`
- M_dump(...) 巨集使用範例
    - M_dump(x)
        - 巨集展開成：`dump(x,sizeof(x)/sizeof(int))`
    - M_dump(a1)
        - 巨集展開成：`dump(a1,sizeof(a1)/sizeof(int))`
        


```c++
#define M_dump(a) dump(a,sizeof(a)/sizeof(int))

int a4[] = {3,4,5,3,2,4,5,6,7,8,9};
int a5[] = {5,5,5,5,5,5,5};
int a6[] = {1,2,3,4,5,6};

M_dump(a4);   
M_dump(a5);   
M_dump(a6);   
```

       3   4   5   3   2   4   5   6   7   8   9
       5   5   5   5   5   5   5
       1   2   3   4   5   6

