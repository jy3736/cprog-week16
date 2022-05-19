```c++
#include <iostream>
#include <iomanip>

using namespace std;
```


```c++
void dump(int d[], int len) {
    for(int i=0; i<len; i++)
        cout<<setw(5)<<d[i];
    cout<<endl;
}
```


```c++
#include <random>

void test_rand() {
    for(int i=0; i<5; i++)
        cout<<rand()<<" ";
    cout<<endl;
}

test_rand();
```

    1507257019 503091032 1107028518 680471104 412560678 



```c++
int dice() {
    return rand()%6+1;
}
```


```c++
void test_dice(int n) {
    for(int i=0; i<n; i++)
        cout<<left<<setw(3)<<dice();
    cout<<endl;
}

test_dice(100);
```

    4  6  2  2  6  6  4  5  6  5  3  4  4  5  2  1  1  1  5  3  6  3  1  2  1  3  1  1  5  2  6  6  5  6  5  4  3  3  6  1  5  6  4  6  5  5  1  3  5  5  5  4  5  5  3  6  5  2  6  1  3  4  4  1  1  3  2  3  5  6  1  1  5  4  1  1  2  5  3  4  3  5  6  5  1  2  4  3  3  2  3  3  3  1  1  3  1  1  3  5  



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

    5    1    3    3    5    1    5    6    2    6    2    3    6    2    6    1    2    1    6    1    4    2    6    4    4    3    1    6    3    4    1    2    5    3    2    1    1    4    6    1    3    6    3    1    5    1    1    6    5    6    5    6    2    2    3    3    4    4    2    4    5    6    5    3    1    5    4    1    2    1    1    5    4    2    3    2    6    3    6    2    1    4    2    6    5    4    6    6    5    2    3    4    5    6    4    3    2    5    2    3    



```c++
int cd[7];
roll_dice(rd,LEN);
analysis(rd,LEN,cd);
dump(rd,LEN);
cout<<endl;
dump(cd,7);
```

    4    4    3    4    4    4    1    6    2    4    5    3    2    6    4    2    3    1    5    3    1    5    4    2    2    6    5    4    4    3    2    6    5    2    3    2    5    1    2    4    2    4    4    3    3    2    5    3    6    3    5    4    5    2    6    6    1    2    1    5    5    6    2    3    1    2    2    4    2    1    5    3    4    3    3    4    2    1    6    5    1    4    2    5    4    1    3    4    1    1    6    5    1    1    5    5    6    4    2    1    
    
    100  16   20   15   21   17   11   



```c++

```
