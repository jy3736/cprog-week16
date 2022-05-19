## 依指定的長度、起始值、及步階設定一維陣列。


- 參考底下輸出結果、`fill_zero(...)`、及 `main()` 函數的使用，設計所需的陣列設定函數。
```shell
lab04> echo 10 0 1 | .\main.exe
    0    0    0    0    0    0    0    0    0    0
    0    1    2    3    4    5    6    7    8    9
lab04> echo 15 1 2 | .\main.exe
    0    0    0    0    0    0    0    0    0    0    0    0    0    0    0
    1    3    5    7    9   11   13   15   17   19   21   23   25   27   29
lab04> echo 8 8 -1 | .\main.exe
    0    0    0    0    0    0    0    0
    8    7    6    5    4    3    2    1
lab04> echo 13 0 0 | .\main.exe 
    0    0    0    0    0    0    0    0    0    0    0    0    0
    0    0    0    0    0    0    0    0    0    0    0    0    0
``` 
- 資料輸出至少要有一個空格作為間隔。
- 建議的函數原型：
```C++
void fill_seq(int arr[], int len, ...);
    - arr 參數指向一維陣列
    - len 給定的陣列長度
    - (還缺了哪些參數？)
```


### 在 Windows 使用自動批閱測試
```shell
lab04> .\test.ps1
g++ -o main ./main.cpp

********************************************
*       Introduction to Programming        *
*  Exercises / Homework Automatic Grading  *
********************************************

Test Data : 11 7 2
Test Data : 7 -6 0
Test Data : 12 7 0
Test Data : 9 -2 -2
Test Data : 10 9 -1
Test Data : 12 -10 -1
Test Data : 14 0 2
Test Data : 10 -8 -2
Test Data : 6 7 2
Test Data : 10 -2 -1

測試通過!

    0    0    0    0    0    0    0    0    0    0
   -2   -3   -4   -5   -6   -7   -8   -9  -10  -11
```

