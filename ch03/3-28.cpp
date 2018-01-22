//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string sa[10];
int ia[10];

int main()
{
    //全局变量的初始化是默认的 且在会在main方法之前
    //局部变量的默认初始化将会产生不确定的值
    int ia2[10];
    string sa2[10];
    cout<<"sa"<<endl;
    for (int i = 0; i < 10; ++i) {
        cout<<sa[i]<<endl;
    }
    cout<<"ia"<<endl;
    for (int j = 0; j < 10; ++j) {

        cout<<ia[j]<<endl;
    }
    cout<<"sa2"<<endl;
    for (int k = 0; k < 10; ++k) {

        cout<<sa2[k]<<endl;
    }
    cout<<"ia2"<<endl;
    for (int l = 0; l < 10; ++l) {

        cout<<ia2[l]<<endl;
    }
    cout<<"end"<<endl;
}
