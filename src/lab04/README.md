## 課堂練習 04 - 亂數與陣列的應用


```c++
#include <iostream>
#include <iomanip>

using namespace std;
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

### 產生5個隨機亂數
- rand() 回傳介於`0`到`RAND_MAX`的隨機亂數


```c++
#include <random>

void test_rand() {
    cout<<"RAND_MAX = "<<RAND_MAX<<endl;
    for(int i=0; i<5; i++)
        cout<<rand()<<" ";
    cout<<endl;
}

test_rand();
```

    RAND_MAX = 2147483647
    1976753258 634285244 1374191183 75828736 518006743 


### 設計一函數回傳`1 ~ 6`的隨機亂數，模擬擲骰子的動作。


```c++
int dice() {
    return rand()%6+1;
}
```


```c++
cout<<dice()<<endl;
cout<<dice()<<endl;
cout<<dice()<<endl;
```

    4
    1
    3


#### 模擬擲骰子 n 次的結果。


```c++
void test_dice(int n) {
    for(int i=0; i<n; i++) {
        cout<<left<<setw(4)<<dice();
        if ((i+1)%20==0)
            cout<<endl;
    }
    cout<<endl;
}

test_dice(100);
```

    4   1   6   3   2   4   5   4   6   5   4   2   5   3   5   5   4   1   1   1   
    6   4   4   2   5   3   5   2   1   6   6   6   3   2   1   1   4   4   4   1   
    2   3   3   1   3   3   2   5   5   2   3   2   5   6   2   4   6   5   3   5   
    1   1   2   2   3   5   1   2   5   6   3   5   2   6   1   2   3   4   5   3   
    5   3   3   6   3   1   5   3   4   6   6   3   1   1   5   6   5   2   6   5   
    


### 設計一函數模擬擲骰子 `len` 次，並將結果存放在 `rn` 陣列。


```c++
void roll_dice(int rn[], int len) {
    for(int i=0; i<len; i++)
        rn[i] = dice();
}
```


```c++
const int LEN = 100;
int rd[LEN];

roll_dice(rd,LEN);
dump(rd,LEN);
```

    3   2   6   3   3   5   1   3   6   1   3   6   1   5   6   3   6   4   6   1   
    1   1   6   1   6   6   4   5   3   4   1   3   3   6   6   6   4   4   2   1   
    5   4   6   5   6   4   6   5   1   3   3   5   1   3   5   6   2   2   5   2   
    4   5   3   6   4   6   3   6   3   4   6   5   6   4   4   5   5   1   4   5   
    3   4   4   4   6   6   1   6   6   3   5   3   1   5   6   3   4   3   6   5   
    


### 設計一函數分析擲骰子結果，並將分析結果存放在 `cnt` 陣列。
- rn ： 模擬擲骰子 `len` 次的結果
- len： 模擬擲骰子的次數
- cnt： 存放分析結果的陣列
    - cnt[0]：模擬次數
    - cnt[1] ~ cnt[6]：依序存放`1 ~ 6`出現的次數


```c++
void analysis(int rn[], int len, int cnt[]) {
    for(int i=0; i<7; i++)
        cnt[i] = 0;
    cnt[0] = len;
    for(int i=0; i<len; i++) 
        cnt[rn[i]]++;
}
```


```c++
int result[7];
int dat[] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6};

analysis(dat,sizeof(dat)/sizeof(int),result);
dump(result,7);
```

    21  1   2   3   4   5   6   



```c++
const int LEN = 100;
int rd[LEN];
int cd[7];

roll_dice(rd,LEN);
analysis(rd,LEN,cd);
dump(rd,LEN);
dump(cd,7);
```

    2   2   5   5   1   6   1   5   1   5   6   6   4   2   4   6   6   3   4   1   
    5   5   3   5   1   5   2   6   2   1   3   3   3   1   2   3   1   6   5   5   
    5   2   4   6   3   1   5   6   2   6   1   4   2   1   3   3   5   2   6   6   
    3   2   2   3   6   1   5   4   1   1   2   3   2   3   6   2   2   2   1   3   
    5   5   6   1   5   2   1   3   4   6   6   4   1   6   6   6   6   2   4   4   
    
    100 18  19  15  10  17  21  

