```c++
#include <iostream>
#include <iomanip>

using namespace std;
```


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


```c++
void seq(int d[], int len, int start, int step) {
    for(int i=0; i<len; i++) {
        d[i] = start;
        start+=step;
    }
}
```


```c++
int a1[15];
seq(a1,15,1,1);
dump(a1,15);
```

       1   2   3   4   5   6   7   8   9  10  11  12  13  14  15



```c++
int a1[15];
seq(a1,15,1,0);
dump(a1,15);
```

       1   1   1   1   1   1   1   1   1   1   1   1   1   1   1



```c++
int a1[15];
seq(a1,15,1,2);
dump(a1,15);
```

       1   3   5   7   9  11  13  15  17  19  21  23  25  27  29



```c++
void fill(int d[], int len, int val) {
    seq(d,len,val,0);    
}
```


```c++
void zero(int d[], int len) {
    seq(d,len,0,0);    
}
```


```c++
int a2[10];
fill(a2,10,123);
dump(a2,10);
```

     123 123 123 123 123 123 123 123 123 123



```c++
int a2[10];
fill(a2,10,56);
dump(a2,10);
```

      56  56  56  56  56  56  56  56  56  56



```c++
int a3[10];
zero(a3,10);
dump(a3,10);
```

       0   0   0   0   0   0   0   0   0   0



```c++
int a3[10];
zero(a3,10);
fill(a3,5,1);
dump(a3,10);
```

       1   1   1   1   1   0   0   0   0   0



```c++
int a3[10];
fill(a3,10,1);
zero(a3,5);
dump(a3,10);
```

       0   0   0   0   0   1   1   1   1   1



```c++
int a4[15];
seq(a4,15,-9,1);
zero(a4,10);
seq(a4,5,5,-1);
dump(a4,15);
```

       5   4   3   2   1   0   0   0   0   0   1   2   3   4   5



```c++

```


```c++

```
