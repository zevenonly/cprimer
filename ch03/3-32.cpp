
//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //全局变量的初始化是默认的 且在会在main方法之前
    //局部变量的默认初始化将会产生不确定的值
    int ia[10]={0};
    int ib[10]={0};
    vector<int> vc;

    for (int i = 0; i < 10; ++i) {
        ia[i]=i;
    }
//    for (int i = 0; i < 10; ++i) {
//        ib[i]=ia[i];
//    }
//    for (int i = 0; i < 10; ++i) {
//        cout<<ib[i]<<endl;
//    }
    for (int i = 0; i < 10; ++i) {
        vc.push_back(ia[i]);
    }
    for (int i = 0; i < 10; ++i) {
        cout<<vc[i]<<endl;
    }
    cout<<"end"<<endl;
}
