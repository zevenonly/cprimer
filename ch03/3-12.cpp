//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> ivec;
    // 不能把int 模板 赋值给 string 模板
    // vector<string> svec = ivec;
    vector<string> svec(10,"null");

}