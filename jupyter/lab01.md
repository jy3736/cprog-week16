```c++
#include <iostream>
#include <iomanip>

using namespace std;
```


```c++
int a1[6] = {1, 4, 2, 5, 6, 7};
```


```c++
cout<<"a1[0] = "<<a1[0]<<endl;
cout<<"a1[1] = "<<a1[1]<<endl;
cout<<"a1[2] = "<<a1[2]<<endl;
cout<<"a1[3] = "<<a1[3]<<endl;
cout<<"a1[4] = "<<a1[4]<<endl;
cout<<"a1[5] = "<<a1[5]<<endl;
```

    a1[0] = 1
    a1[1] = 4
    a1[2] = 2
    a1[3] = 5
    a1[4] = 6
    a1[5] = 7



```c++
a1[0] = 6;
a1[1] = 66;
a1[2] = 666;
cout<<"a1[0] = "<<a1[0]<<endl;
cout<<"a1[1] = "<<a1[1]<<endl;
cout<<"a1[2] = "<<a1[2]<<endl;
```

    a1[0] = 6
    a1[1] = 66
    a1[2] = 666



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
```

       6  66 666   5   6   7



```c++
dump(a1,3);
```

       6  66 666



```c++
void fill(int d[], int len, int val) {
    for(int i=0; i<len; i++)
        d[i] = val;    
}
```


```c++
int a2[10];
fill(a2,10,88);
dump(a2,10);
```

      88  88  88  88  88  88  88  88  88  88



```c++
fill(a2,10,0);
dump(a2,10);
```

       0   0   0   0   0   0   0   0   0   0



```c++
void zero(int d[], int len) {
    fill(d,len,0);
}
```


```c++
int a3[15];
zero(a3,15);
dump(a3,15);
```

       0   0   0   0   0   0   0   0   0   0   0   0   0   0   0



```c++
void seven(int d[], int len) {
    fill(d,len,7);
}
```


```c++
int a4[10];
seven(a4,10);
dump(a4,10);
```

       7   7   7   7   7   7   7   7   7   7



```c++

```


```c++

```
