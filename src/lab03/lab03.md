```c++
#include <iostream>
#include <iomanip>

using namespace std;
```


```c++
int a1[6] = {1, 4, 2, 5, 6, 7};
int a2[] = {1, 4, 2, 5, 6, 7, 8, 9};
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



```c++
#define M_dump(a) dump(a,sizeof(a)/sizeof(int))

int a4[] = {3,4,5,3,2,4,5,6,7,8,9};
int a5[] = {5,5,5,5,5,5,5};
int a6[] = {1,2,3,4,5,6};

M_dump(a4);   // dump(a4,sizeof(a4)/sizeof(int))
M_dump(a5);   
M_dump(a6);   
```

       3   4   5   3   2   4   5   6   7   8   9
       5   5   5   5   5   5   5
       1   2   3   4   5   6



```c++

```
