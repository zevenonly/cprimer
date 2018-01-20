//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};

    vector<string> ivec;

    string i ;
    cout<<v7.size()<<endl;
    auto iter = v7.begin();
    while(iter != v7.end()){
        cout<<*iter<<endl;
        iter++;
    }

}
