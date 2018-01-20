//
// Created by zhangyw15486 on 2018-01-20.
//const 常量类型 不允许被赋值、改变。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string s = "keep";
    for (auto &c  : s) {
        cout << c << endl;
        c = "X";
    }

}