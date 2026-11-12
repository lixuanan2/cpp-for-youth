# 补页：改 string 的一格

第 2 关要用。基础课第 16 课学过**读** string 的一格，这一页学**改**一格。

## 1. string 像一排 char

```
string board = "X...O....";
下标：          0 1 2 3 4 5 6 7 8
```

第 16 课学过读：`board[4]` 是 `'O'`，`board.size()` 是 9。

## 2. 改一格：和数组一样写

第 12 课改数组的一格是 `a[i] = 5;`。string 也一样：

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string board = ".........";
    board[4] = 'X';
    board[0] = 'O';
    cout << board << endl;
    return 0;
}
```

输出：

```
O...X....
```

要记住两点：
- 右边是**一个字符**，用单引号：`'X'`。写成双引号 `"X"` 会编译出错。
- 下标只能是 0 到 `size() - 1`。超出去不会报错，但结果是乱的。所以第 1 关的 `can_put` 先查 `i` 在不在 0 到 8。

## 3. 在函数里改：改的是副本，要 return

第 18 课学过：交给函数的参数是一份**副本**。函数里改了 string，外面的那个不会变。所以改完要 `return`，外面再接住：

```cpp
string fill(string s, int i) {
    s[i] = '#';
    return s;          // 把改好的副本还回去
}

int main() {
    string a = "....";
    fill(a, 1);        // 没接住：a 还是 "...."
    a = fill(a, 1);    // 接住了：a 变成 ".#.."
    cout << a << endl;
    return 0;
}
```

第 2 关的 `put` 就是这样：改好一格，把新棋盘还回去。

## 4. 小练习（先想，再翻到最下面看答案）

1. `string s = "abc"; s[1] = 'X';` 之后 `s` 是什么？
2. 下面的程序输出什么？

```cpp
string g(string s) {
    s[0] = 'Z';
    return s;
}

int main() {
    string a = "ok";
    string b = g(a);
    cout << a << " " << b << endl;
    return 0;
}
```

&nbsp;

&nbsp;

&nbsp;

答案：1. `"aXc"`；2. `ok Zk`（`a` 是原来的，`b` 是改过的副本）。
